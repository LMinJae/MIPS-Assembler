#ifndef MIPS_ASSEMBLER_H_
#define MIPS_ASSEMBLER_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "MIPS_Define.h"

typedef uint32_t (*MIPS_Mapper_Ptr)(size_t, size_t, size_t);

uint32_t MIPS_Mapper_ADD(size_t rd, size_t rs, size_t rt) {
	return MIPS_INST_ADD(rd, rs, rt).code;
}
uint32_t MIPS_Mapper_ADDI(size_t rt, size_t rs, size_t immediate) {
	return MIPS_INST_ADDI(rt, rs, immediate).code;
}
uint32_t MIPS_Mapper_ADDIU(size_t rt, size_t rs, size_t immediate) {
	return MIPS_INST_ADDIU(rt, rs, immediate).code;
}
uint32_t MIPS_Mapper_ADDU(size_t rd, size_t rs, size_t rt) {
	return MIPS_INST_ADDU(rd, rs, rt).code;
}
uint32_t MIPS_Mapper_AND(size_t rd, size_t rs, size_t rt) {
	return MIPS_INST_AND(rd, rs, rt).code;
}
uint32_t MIPS_Mapper_ANDI(size_t rt, size_t rs, size_t immediate) {
	return MIPS_INST_ANDI(rt, rs, immediate).code;
}
uint32_t MIPS_Mapper_BEQ(size_t rs, size_t rt, size_t immediate) {
	return MIPS_INST_BEQ(rs, rt, immediate).code;
}
uint32_t MIPS_Mapper_BNE(size_t rs, size_t rt, size_t immediate) {
	return MIPS_INST_BNE(rs, rt, immediate).code;
}
uint32_t MIPS_Mapper_J(size_t immediate, size_t _unused0, size_t _unused1) {
	return MIPS_INST_J(immediate).code;
}
uint32_t MIPS_Mapper_JAL(size_t offset, size_t _unused0, size_t _unused1) {
	return MIPS_INST_JAL(offset).code;
}
uint32_t MIPS_Mapper_JR(size_t rs, size_t _unused0, size_t _unused1) {
	return MIPS_INST_JR(rs).code;
}
uint32_t MIPS_Mapper_LBU(size_t rt, size_t offset, size_t base) {
	return MIPS_INST_LBU(rt, offset, base).code;
}
uint32_t MIPS_Mapper_LHU(size_t rt, size_t offset, size_t base) {
	return MIPS_INST_LHU(rt, offset, base).code;
}
uint32_t MIPS_Mapper_LL(size_t rt, size_t offset, size_t base) {
	return MIPS_INST_LL(rt, offset, base).code;
}
uint32_t MIPS_Mapper_LUI(size_t rt, size_t immediate, size_t _unused0) {
	return MIPS_INST_LUI(rt, immediate).code;
}
uint32_t MIPS_Mapper_LW(size_t rt, size_t offset, size_t base) {
	return MIPS_INST_LW(rt, offset, base).code;
}
uint32_t MIPS_Mapper_NOR(size_t rd, size_t rs, size_t rt) {
	return MIPS_INST_NOR(rd, rs, rt).code;
}
uint32_t MIPS_Mapper_OR(size_t rd, size_t rs, size_t rt) {
	return MIPS_INST_OR(rd, rs, rt).code;
}
uint32_t MIPS_Mapper_ORI(size_t rt, size_t rs, size_t immediate) {
	return MIPS_INST_ORI(rt, rs, immediate).code;
}
uint32_t MIPS_Mapper_SLT(size_t rd, size_t rs, size_t rt) {
	return MIPS_INST_SLT(rd, rs, rt).code;
}
uint32_t MIPS_Mapper_SLTI(size_t rt, size_t rs, size_t immediate) {
	return MIPS_INST_SLTI(rt, rs, immediate).code;
}
uint32_t MIPS_Mapper_SLTIU(size_t rt, size_t rs, size_t immediate) {
	return MIPS_INST_SLTIU(rt, rs, immediate).code;
}
uint32_t MIPS_Mapper_SLTU(size_t rd, size_t rs, size_t rt) {
	return MIPS_INST_SLTU(rd, rs, rt).code;
}
uint32_t MIPS_Mapper_SLL(size_t rd, size_t rt, size_t shamt) {
	return MIPS_INST_SLL(rd, rt, shamt).code;
}
uint32_t MIPS_Mapper_SRL(size_t rd, size_t rt, size_t shamt) {
	return MIPS_INST_SRL(rd, rt, shamt).code;
}
uint32_t MIPS_Mapper_SB(size_t rt, size_t offset, size_t base) {
	return MIPS_INST_SB(rt, offset, base).code;
}
uint32_t MIPS_Mapper_SC(size_t rt, size_t offset, size_t base) {
	return MIPS_INST_SC(rt, offset, base).code;
}
uint32_t MIPS_Mapper_SH(size_t rt, size_t offset, size_t base) {
	return MIPS_INST_SH(rt, offset, base).code;
}
uint32_t MIPS_Mapper_SW(size_t rt, size_t offset, size_t base) {
	return MIPS_INST_SW(rt, offset, base).code;
}
uint32_t MIPS_Mapper_SUB(size_t rd, size_t rs, size_t rt) {
	return MIPS_INST_SUB(rd, rs, rt).code;
}
uint32_t MIPS_Mapper_SUBU(size_t rd, size_t rs, size_t rt) {
	return MIPS_INST_SUBU(rd, rs, rt).code;
}
uint32_t MIPS_Mapper_BCLT(size_t addr, size_t _unused0, size_t _unused1) {
	return MIPS_INST_BCLT(addr).code;
}
uint32_t MIPS_Mapper_BCLF(size_t addr, size_t _unused0, size_t _unused1) {
	return MIPS_INST_BCLF(addr).code;
}
uint32_t MIPS_Mapper_DIV(size_t rs, size_t rt, size_t _unused0) {
	return MIPS_INST_DIV(rs, rt).code;
}
uint32_t MIPS_Mapper_DIVU(size_t rs, size_t rt, size_t _unused0) {
	return MIPS_INST_DIVU(rs, rt).code;
}
uint32_t MIPS_Mapper_ADD_S(size_t fd, size_t fs, size_t ft) {
	return MIPS_INST_ADD_S(fd, fs, ft).code;
}
uint32_t MIPS_Mapper_ADD_D(size_t fd, size_t fs, size_t ft) {
	return MIPS_INST_ADD_D(fd, fs, ft).code;
}
uint32_t MIPS_Mapper_C_EQ_S(size_t fs, size_t ft, size_t _unused0) {
	return MIPS_INST_C_EQ_S(fs, ft).code;
}
uint32_t MIPS_Mapper_C_EQ_D(size_t fs, size_t ft, size_t _unused0) {
	return MIPS_INST_C_EQ_D(fs, ft).code;
}
uint32_t MIPS_Mapper_C_LT_S(size_t fs, size_t ft, size_t _unused0) {
	return MIPS_INST_C_LT_S(fs, ft).code;
}
uint32_t MIPS_Mapper_C_LT_D(size_t fs, size_t ft, size_t _unused0) {
	return MIPS_INST_C_LT_D(fs, ft).code;
}
uint32_t MIPS_Mapper_C_LE_S(size_t fs, size_t ft, size_t _unused0) {
	return MIPS_INST_C_LE_S(fs, ft).code;
}
uint32_t MIPS_Mapper_C_LE_D(size_t fs, size_t ft, size_t _unused0) {
	return MIPS_INST_C_LE_D(fs, ft).code;
}
uint32_t MIPS_Mapper_DIV_S(size_t fd, size_t fs, size_t ft) {
	return MIPS_INST_DIV_S(fd, fs, ft).code;
}
uint32_t MIPS_Mapper_DIV_D(size_t fd, size_t fs, size_t ft) {
	return MIPS_INST_DIV_D(fd, fs, ft).code;
}
uint32_t MIPS_Mapper_MUL_S(size_t fd, size_t fs, size_t ft) {
	return MIPS_INST_MUL_S(fd, fs, ft).code;
}
uint32_t MIPS_Mapper_MUL_D(size_t fd, size_t fs, size_t ft) {
	return MIPS_INST_MUL_D(fd, fs, ft).code;
}
uint32_t MIPS_Mapper_SUB_S(size_t fd, size_t fs, size_t ft) {
	return MIPS_INST_SUB_S(fd, fs, ft).code;
}
uint32_t MIPS_Mapper_SUB_D(size_t fd, size_t fs, size_t ft) {
	return MIPS_INST_SUB_D(fd, fs, ft).code;
}
uint32_t MIPS_Mapper_LWCL(size_t rt, size_t rs, size_t immediate) {
	return MIPS_INST_LWCL(rt, rs, immediate).code;
}
uint32_t MIPS_Mapper_LDCL(size_t rt, size_t rs, size_t immediate) {
	return MIPS_INST_LDCL(rt, rs, immediate).code;
}
uint32_t MIPS_Mapper_MFHI(size_t rd, size_t _unused0, size_t _unused1) {
	return MIPS_INST_MFHI(rd).code;
}
uint32_t MIPS_Mapper_MFLO(size_t rd, size_t _unused0, size_t _unused1) {
	return MIPS_INST_MFLO(rd).code;
}
uint32_t MIPS_Mapper_MFC0(size_t rd, size_t rs, size_t _unused0) {
	return MIPS_INST_MFC0(rd, rs).code;
}
uint32_t MIPS_Mapper_MULT(size_t rs, size_t rt, size_t _unused0) {
	return MIPS_INST_MULT(rs, rt).code;
}
uint32_t MIPS_Mapper_MULTU(size_t rs, size_t rt, size_t _unused0) {
	return MIPS_INST_MULTU(rs, rt).code;
}
uint32_t MIPS_Mapper_SRA(size_t rd, size_t rt, size_t shamt) {
	return MIPS_INST_SRA(rd, rt, shamt).code;
}
uint32_t MIPS_Mapper_SWCL(size_t rt, size_t offset, size_t base) {
	return MIPS_INST_SWCL(rt, offset, base).code;
}
uint32_t MIPS_Mapper_SDCL(size_t rt, size_t offset, size_t base) {
	return MIPS_INST_SDCL(rt, offset, base).code;
}

typedef enum _MIPS_ARGFLAG {
	_MIPS_ARGFLAG_TYPE_NONE = 0,
	_MIPS_ARGFLAG_TYPE_REGISTER,
	_MIPS_ARGFLAG_TYPE_SIGN_EXT_IMM,
	_MIPS_ARGFLAG_TYPE_ZERO_EXT_IMM,
	_MIPS_ARGFLAG_TYPE_BRANCH_ADDR,
	_MIPS_ARGFLAG_TYPE_JUMP_ADDR,
	_MIPS_ARGFLAG_TYPE_SHAMT,
	_MIPS_ARGFLAG_TYPE_MASK = (1 << 3) -1,

	_MIPS_ARGFLAG_SHIFTER_1ST = 0,
	_MIPS_ARGFLAG_SHIFTER_2ND = 3,
	_MIPS_ARGFLAG_SHIFTER_3RD = 3 << 1,
} _MIPS_ARGFLAG_t;

typedef struct _MIPS_Opcode_Info {
	_MIPS_ARGFLAG_t argflag;
	MIPS_Mapper_Ptr mapper;
} _MIPS_Opcode_Info_t;

typedef struct _MIPS_Opcode_Info_Node _MIPS_Opcode_Info_Node_t;
struct _MIPS_Opcode_Info_Node {
	char key;
	_MIPS_Opcode_Info_t *value;
	_MIPS_Opcode_Info_Node_t *left, *right;
};

_MIPS_Opcode_Info_Node_t *_MIPS_opcode_rootNode = &(_MIPS_Opcode_Info_Node_t){
	.key='a',	// a
	.value=NULL,
	.left=
		#include "MIPS_Opcode_Info_C_A.incl"
	,
	.right=&(_MIPS_Opcode_Info_Node_t){
		.key='b',	// b
		.value=NULL,
		.left=
			#include "MIPS_Opcode_Info_C_B.incl"
		,
		.right=&(_MIPS_Opcode_Info_Node_t){
			.key='c',	// c
			.value=NULL,
			.left=
				#include "MIPS_Opcode_Info_C_C.incl"
			,
			.right=&(_MIPS_Opcode_Info_Node_t){
				.key='d',	// d
				.value=NULL,
				.left=
					#include "MIPS_Opcode_Info_C_D.incl"
				,
				.right=&(_MIPS_Opcode_Info_Node_t){
					.key='j',	// j
					.value=
						#include "MIPS_Opcode_Info_V_J.incl"
					,
					.left=
						#include "MIPS_Opcode_Info_C_J.incl"
					,
					.right=&(_MIPS_Opcode_Info_Node_t){
						.key='l',	// l
						.value=NULL,
						.left=
							#include "MIPS_Opcode_Info_C_L.incl"
						,
						.right=&(_MIPS_Opcode_Info_Node_t){
							.key='m',	// m
							.value=NULL,
							.left=
								#include "MIPS_Opcode_Info_C_M.incl"
							,
							.right=&(_MIPS_Opcode_Info_Node_t){
								.key='n',	// n
								.value=NULL,
								.left=
									#include "MIPS_Opcode_Info_C_N.incl"
								,
								.right=&(_MIPS_Opcode_Info_Node_t){
									.key='o',	// 
									.value=NULL,
									.left=
										#include "MIPS_Opcode_Info_C_O.incl"
									,
									.right=&(_MIPS_Opcode_Info_Node_t){
										.key='s',	// s
										.value=NULL,
										.left=
											#include "MIPS_Opcode_Info_C_S.incl"
										,
										.right=NULL
									}
								}
							}
						}
					}
				}
			}
		}
	}
};

_MIPS_Opcode_Info_t* _MIPS_Get_Opcode_Info(_MIPS_Opcode_Info_Node_t *node, const char *opcode) {
	if (opcode[0] == '\0') return node->value;
	_MIPS_Opcode_Info_Node_t *it = node;
	while (NULL != it) {
		if (opcode[0] == it->key) {
			if (opcode[1] == '\0') {
				return it->value;
			}
			return _MIPS_Get_Opcode_Info(it->left, opcode+1);;
		}
		it = it->right;
	}
	return NULL;
}

typedef struct MIPS_Assembler_Context {
	size_t length;
} MIPS_Assembler_Context_t;

MIPS_Assembler_Context_t MIPS_Assembler_new() {
	MIPS_Assembler_Context_t ctx = { 0, };
	return ctx;
}

void MIPS_Assembler_free(MIPS_Assembler_Context_t *ctx) {
}

int MIPS_Assembler_tick(MIPS_Assembler_Context_t *ctx, size_t size) {
	return ctx->length += size;
}

void MIPS_Assembler_assembly(FILE *in, FILE *out) {
	MIPS_Assembler_Context_t ctx = MIPS_Assembler_new();

	char buf[0xffff] = { 0, };
	size_t tail = 0;
	char ch = 0;
	while (EOF != (ch = fgetc(in))) {
		switch (ch) {
		case '\t':
			ch = ' ';
		case ' ':
			if (0 == tail || ' ' == buf[tail-1] || ',' == buf[tail-1]) {
				break;
			}
		default:
			buf[tail++] = ch;
			break;
		case ':':
			fputs("\033[0;32m", stderr);
			fputs(buf, stderr);
			fputs("\033[0m:\n", stderr);
			for (int i = 0; i < tail; i++) {
				buf[i] = 0;
			}
			tail = 0;
			break;
		case '#':
			while (ch = fgetc(in), ('\n' != ch && '\r' != ch));	// SKIP
		case '\n':
		case '\r':
			if (tail) {
				char *opcode = strtok(buf, " ");
				fprintf(stderr, "%.8lX\t", ctx.length);
				fputs("\t\033[0;36m", stderr);
				fputs(opcode, stderr);
				fputs("\033[0m\t", stderr);
 
				int argc = 1;
				char *argv[3] = { opcode + strlen(opcode) + 1, };
				for (char *ch = argv[0]; '\0' != *ch; ++ch) {
					/**/ if(',' == *ch ||
							'(' == *ch) {
						*ch = 0;
						argv[argc++] = ++ch;
					}
					else if(')' == *ch) {
						*ch = 0;
						break;
					}
				}

				_MIPS_Opcode_Info_t *info = _MIPS_Get_Opcode_Info(_MIPS_opcode_rootNode, opcode);

				/**/ if(NULL != info) {
					size_t arg[3] = { 0, };
					for (int i = 0; i < argc; i++) {
						/**/ if('$' == argv[i][0]) {
							/**/ if('z' == argv[i][1] &&
									'e' == argv[i][2] &&
									'r' == argv[i][3] &&
									'o' == argv[i][4]) {
							arg[i] = MIPS_REGISTER_ZERO;
							}
							else if('a' == argv[i][1]) {
								/**/ if('t' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_AT;
								}
								else if('0' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_A0;
								}
								else if('1' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_A1;
								}
								else if('2' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_A2;
								}
								else if('3' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_A3;
								}
							}
							else if('v' == argv[i][1]) {
								/**/ if('0' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_V0;
								}
								else if('1' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_V1;
								}
							}
							else if('t' == argv[i][1]) {
								/**/ if('0' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_T0;
								}
								else if('1' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_T1;
								}
								else if('2' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_T2;
								}
								else if('3' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_T3;
								}
								else if('4' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_T4;
								}
								else if('5' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_T5;
								}
								else if('6' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_T6;
								}
								else if('7' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_T7;
								}
								else if('8' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_T8;
								}
								else if('9' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_T9;
								}
							}
							else if('s' == argv[i][1]) {
								/**/ if('0' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_S0;
								}
								else if('1' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_S1;
								}
								else if('2' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_S2;
								}
								else if('3' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_S3;
								}
								else if('4' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_S4;
								}
								else if('5' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_S5;
								}
								else if('6' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_S6;
								}
								else if('7' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_S7;
								}
							}
							else if('k' == argv[i][1]) {
								/**/ if('0' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_K0;
								}
								else if('1' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_K1;
								}
							}
							else if('p' == argv[i][2]) {
								/**/ if('g' == argv[i][1]) {
									arg[i] = MIPS_REGISTER_GP;
								}
								else if('s' == argv[i][1]) {
									arg[i] = MIPS_REGISTER_SP;
								}
								else if('f' == argv[i][1]) {
									arg[i] = MIPS_REGISTER_FP;
								}
							}
							else if('r' == argv[i][1] &&
									'a' == argv[i][2]) {
									arg[i] = MIPS_REGISTER_RA;								
							}
						}
						else if('-' == argv[i][0] ||
								31 <= argv[i][0] &&
								39 <= argv[i][0]) {
							int16_t v;
							sscanf(argv[i], "%hd", &v);
							arg[i] = ((0x80000000 & v) >> 16) | (0x7fff & (size_t)v);
						}
						else {
						}
					}
					uint32_t code = info->mapper(arg[0], arg[1], arg[2]);
					fwrite(&code, sizeof(code), 1, out);
					fprintf(stderr, "\r\t    %.8X\t\t", info->mapper(arg[0], arg[1], arg[2]));
					
					fputs("\033[0;35m", stderr);
					fputs(argv[0], stderr);
					fputs("\033[0m", stderr);
					if (((info->argflag >> _MIPS_ARGFLAG_SHIFTER_2ND) & _MIPS_ARGFLAG_TYPE_MASK) == _MIPS_ARGFLAG_TYPE_SIGN_EXT_IMM &&
						((info->argflag >> _MIPS_ARGFLAG_SHIFTER_3RD) & _MIPS_ARGFLAG_TYPE_MASK) == _MIPS_ARGFLAG_TYPE_REGISTER) {
						fputs(", ", stderr);
						fputs(argv[1], stderr);
						fputs("(\033[0;35m", stderr);
						fputs(argv[2], stderr);
						fputs("\033[0m)", stderr);
					}
					else {
						for (int i = 1; i < argc; i++) {
							fputs(", \033[0;35m", stderr);
							fputs(argv[i], stderr);
							fputs("\033[0m", stderr);
						}
					}
				}
				else {
					fputs(strtok(NULL, "\0"), stderr);
					fputs("\r\t    \033[0;31mUNKNOWN\033[0m", stderr);
				}
				fputc('\n', stderr);

				MIPS_Assembler_tick(&ctx, 4);

				for (int i = 0; i < tail; i++) {
					buf[i] = 0;
				}
				tail = 0;
			}
			break;
		}
	}

	MIPS_Assembler_free(&ctx);
}

#endif	// MIPS_ASSEMBLER_H_
