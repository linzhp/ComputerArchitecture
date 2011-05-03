#include <stdio.h>
#include "bwextenders.h"
#include "multiplexers.h"

int main(void){
	char A[32]="10101010000101111111100000111001";
	char B[32]="01000011000100000011111110001001";
	char C[32]="10000000100101101011100010110001";
	char D[32]="11111010000101101110100100111100";
	char E[32]="11100010000001110111100000101001";
	char F[32]="10111111110101000011100110110000";
	char G[32]="01010111111100000001101000001001";
	char H[32]="00000000010101101101100000110001";
	char X[32];

	printf("Testing BWExtend1_32:\n");
	BWExtend1_32(X, '0');
	printf("0 is extended to %.32s\n", X);
	BWExtend1_32(X, '1');
	printf("1 is extended to %.32s\n", X);

	printf("\nTesting mux_2_1:\n");
	printf("Expected output:%c\n", A[0]);
	printf("Actual output:\t%c\n", mux_2_1(A[0], B[0], "0"));

	printf("\nTesting mux_2_32:\n");
	printf("Expected output:%.32s\n", B);
	mux_2_32(X, A, B, "1");
	printf("Actual output:\t%.32s\n", X);

	printf("\nTesting mux_4_1:\n");
	printf("Expected output:%c\n", C[0]);
	printf("Actual output:\t%c\n", mux_4_1(A[0], B[0], C[0], D[0], "10"));

	printf("\nTesting mux_4_32:\n");
	printf("Expected output:%.32s\n", D);
	mux_4_32(X, A, B, C, D, "11");
	printf("Actual output:\t%.32s\n", X);

	printf("\nTesting mux_8_1:\n");
	printf("Expected output:%c\n", E[0]);
	printf("Actual output:\t%c\n", mux_8_1(A[0], B[0], C[0], D[0], E[0], F[0], G[0], H[0], "100"));

	printf("\nTesting mux_8_32:\n");
	printf("Expected output:%.32s\n", F);
	mux_8_32(X, A, B, C, D, E, F, G, H, "101");
	printf("Actual output:\t%.32s\n", X);

	return 0;
}
