#include <stdio.h>
#include "shifter_signextend.h"
#include "memory.h"
#include "complement.h"
#include "ALU.h"

int main(void){
	char A[32]="10101010000101111111100000111001";
	char B[16]="1010111000101100";
	char C[32]="10000000100101101011100010110001";
	char D[32]="01000011000100000011111110001001";
	char X[32];
	printf("\nTesting left shift\n");
	shiftleft2x(X, A);
	printf("Expected output: 10101000010111111110000011100100\n");
	printf("Actual output:\t%.32s\n",X);

	printf("\nTesting sign extend\n");
	signextend(X, B);
	printf("Expect output: 11111111111111111010111000101100\n");
	printf("Actual output: %.32s\n", X);

	printf("\nTesting memory\n");
	char memcontents[4096][8];
	printf("Expect output: %.32s\n", A);
	MemoryAccess(NULL, "00000000000000000000000000001000", A, '1', memcontents);
	printf("Actual output: %.32s\n", memcontents[8]);
	MemoryAccess(X, "00000000000000000000000000001000", NULL, '0', memcontents);
	printf("Actual output: %.32s\n", X);

	printf("\nTesting complement\n");
	complement(X, A);
	printf("Expected output: 01010101111010000000011111000111\n");
	printf("Actual output:\t%.32s\n", X);

	printf("\nTesting ALU add\n");
	ALU(X, A, D, "010");
	printf("Expected output: 11101101001010000011011111000010\n");
	printf("Actual output:\t%.32s\n", X);

	printf("\nTesting ALU sub\n");
	char zero = ALU(X, A, C, "110");
	printf("Expected output: 00101001100000010011111110001000\n");
	printf("Actual output:\t%.32s\n", X);
	printf("Expected output: 0\n");
	printf("Actual output: %c\n", zero);

	printf("\nTesting ALU slt\n");
	zero = ALU(X, A, C, "111");
	printf("Expected output: 00000000000000000000000000000000\n");
	printf("Actual output:\t%.32s\n", X);
	printf("Expected output: 1\n");
	printf("Actual output: %c\n", zero);
	return 0;
}
