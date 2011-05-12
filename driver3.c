#include <stdio.h>
#include "shifter_signextend.h"

int main(void){
	char A[32]="10101010000101111111100000111001";
	char X[32];
	printf("\nTesting left shift\n");
	shiftleft2x(X, A);
	printf("Expected output: 10101000010111111110000011100100\n");
	printf("Actual output:\t%.32s\n",X);

	printf("\nTesting sign extend\n");
	signextend(X, A);
	printf("Expect output: 11111111111111111010101000010111\n");
	printf("Actual output: %.32s\n", X);
	return 0;
}
