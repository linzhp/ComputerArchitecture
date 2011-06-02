#include <stdio.h>
#include "control.h"

int main(void){
	printf("\nTesting regWrite\n");
	char regWrite, jump, branch, memRead, memToReg, operation[3], memWrite, ALUsrc, regDst;
	ControlUnit("101011", "000000", &regWrite, &jump, &branch, &memRead, &memToReg, operation, &memWrite, &ALUsrc, &regDst);
	printf("Expected output: 0\n");
	printf("Actual output: %c\n", regWrite);
	ControlUnit("100011", "000000", &regWrite, &jump, &branch, &memRead, &memToReg, operation, &memWrite, &ALUsrc, &regDst);
	printf("Expected output: 1\n");
	printf("Actual output: %c\n", regWrite);

	printf("\nTesting jump\n");
	ControlUnit("101011", "000000", &regWrite, &jump, &branch, &memRead, &memToReg, operation, &memWrite, &ALUsrc, &regDst);
	printf("Expected output: 0\n");
	printf("Actual output: %c\n", jump);
	ControlUnit("000010", "000000", &regWrite, &jump, &branch, &memRead, &memToReg, operation, &memWrite, &ALUsrc, &regDst);
	printf("Expected output: 1\n");
	printf("Actual output: %c\n", jump);

	printf("\nTesting branch\n");
	ControlUnit("101011", "000000", &regWrite, &jump, &branch, &memRead, &memToReg, operation, &memWrite, &ALUsrc, &regDst);
	printf("Expected output: 0\n");
	printf("Actual output: %c\n", branch);
	ControlUnit("000100", "000000", &regWrite, &jump, &branch, &memRead, &memToReg, operation, &memWrite, &ALUsrc, &regDst);
	printf("Expected output: 1\n");
	printf("Actual output: %c\n", branch);

	printf("\nTesting memRead and memToReg\n");
	ControlUnit("100011", "000000", &regWrite, &jump, &branch, &memRead, &memToReg, operation, &memWrite, &ALUsrc, &regDst);
	printf("Expected output: 1\n");
	printf("Actual output: %c\n", memRead);
	printf("Actual output: %c\n", memToReg);

	printf("\nTesting operation\n");
	ControlUnit("100011", "000000", &regWrite, &jump, &branch, &memRead, &memToReg, operation, &memWrite, &ALUsrc, &regDst);
	printf("Expected output: 000\n");
	printf("Actual output: %.3s\n", operation);
	ControlUnit("000000", "101010", &regWrite, &jump, &branch, &memRead, &memToReg, operation, &memWrite, &ALUsrc, &regDst);
	printf("Expected output: 111\n");
	printf("Actual output: %.3s\n", operation);
	ControlUnit("000000", "100100", &regWrite, &jump, &branch, &memRead, &memToReg, operation, &memWrite, &ALUsrc, &regDst);
	printf("Expected output: 010\n");
	printf("Actual output: %.3s\n", operation);
	ControlUnit("111111", "000000", &regWrite, &jump, &branch, &memRead, &memToReg, operation, &memWrite, &ALUsrc, &regDst);
	printf("Expected output: 011\n");
	printf("Actual output: %.3s\n", operation);

	printf("\nTesting memWrite\n");
	ControlUnit("101011", "000000", &regWrite, &jump, &branch, &memRead, &memToReg, operation, &memWrite, &ALUsrc, &regDst);
	printf("Expected output: 1\n");
	printf("Actual output: %c\n", memWrite);

	printf("\nTesting ALUsrc\n");
	printf("Expected output: 1\n");
	printf("Actual output: %c\n", ALUsrc);
	ControlUnit("000100", "000000", &regWrite, &jump, &branch, &memRead, &memToReg, operation, &memWrite, &ALUsrc, &regDst);
	printf("Expected output: 0\n");
	printf("Actual output: %c\n", ALUsrc);

	printf("\nTesting regDst\n");
	printf("Expected output: 0\n");
	printf("Actual output: %c\n", regDst);
	ControlUnit("000000", "100100", &regWrite, &jump, &branch, &memRead, &memToReg, operation, &memWrite, &ALUsrc, &regDst);
	printf("Expected output: 1\n");
	printf("Actual output: %c\n", regDst);
	return 0;
}
