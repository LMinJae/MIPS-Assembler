add $t0, $s1, $s2

# i = N*N + 3*N

1_Unoptimized:
    lw     $t0, 4($gp)       # fetch N
    mult   $t0, $t0, $t0     # N*N
    lw     $t1, 4($gp)       # fetch N
    ori    $t2, $zero, 3     # 3
    mult   $t1, $t1, $t2     # 3*N
    add    $t2, $t0, $t1     # N*N + 3*N
    sw     $t2, 0($gp)       # i = ...

1_Optimized:
    lw     $t0, 4($gp)       # fetch N
    add    $t1, $t0, $zero   # copy N to $t1
    addi   $t1, $t1, 3       # N+3
    mult   $t1, $t1, $t0     # N*(N+3)
    sw     $t1, 0($gp)       # i = ...

#    A[i] = A[i/2] + 1;
#    A[i+1] = -1;

2_Unoptimized:
# A[i] = A[i/2] + 1;
    lw     $t0, 0($gp)       # fetch i
    srl    $t0, $t0, 1       # i/2
    addi   $t1, $gp, 28      # &A[0]
    sll    $t0, $t0, 2       # turn i/2 into a byte offset (*4)
    add    $t1, $t1, $t0     # &A[i/2]
    lw     $t1, 0($t1)       # fetch A[i/2]
    addi   $t1, $t1, 1       # A[i/2] + 1
    lw     $t0, 0($gp)       # fetch i
    sll    $t0, $t0, 2       # turn i into a byte offset 
    addi   $t2, $gp, 28      # &A[0]
    add    $t2, $t2, $t0     # &A[i]
    sw     $t1, 0($t2)       # A[i] = ...
# A[i+1] = -1;
    lw     $t0, 0($gp)       # fetch i
    addi   $t0, $t0, 1       # i+1
    sll    $t0, $t0, 2       # turn i+1 into a byte offset
    addi   $t1, $gp, 28      # &A[0]
    add    $t1, $t1, $t0     # &A[i+1]
    addi   $t2, $zero, -1    # -1
    sw     $t2, 0($t1)       # A[i+1] = -1

2_Optimized:
# A[i] = A[i/2] + 1;
    lw     $t0, 0($gp)       # fetch i
    srl    $t1, $t0, 1       # i/2
    sll    $t1, $t1, 2       # turn i/2 into a byte offset (*4)
    add    $t1, $gp, $t1     # &A[i/2] - 28
    lw     $t1, 28($t1)      # fetch A[i/2]
    addi   $t1, $t1, 1       # A[i/2] + 1
    sll    $t2, $t0, 2       # turn i into a byte offset 
    add    $t2, $t2, $gp     # &A[i] - 28
    sw     $t1, 28($t2)      # A[i] = ...
# A[i+1] = -1;
    addi   $t1, $zero, -1    # -1
    sw     $t1, 32($t2)      # A[i+1] = -1
    