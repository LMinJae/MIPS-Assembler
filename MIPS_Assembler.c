#include <assert.h>
#include <stdio.h>

#define LITTLE_ENDIAN
#include "MIPS_Assembler.h"

int main(int argc, char *argv[]) {
	assert(0x02324020 == MIPS_Mapper_ADD(MIPS_REGISTER_T0, MIPS_REGISTER_S1, MIPS_REGISTER_S2));

	{
		freopen(argv[1], "r", stdin);
		freopen(argv[2], "wb+", stdout);
		MIPS_Assembler_assembly(stdin, stdout);
		fclose(stdin);
		fclose(stdout);
	}

	return 0;
}
