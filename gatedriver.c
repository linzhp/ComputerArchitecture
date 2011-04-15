/*********************
# 01/25/09
#
# Aimen Al-Refai
# driver 
*********************/

#include <stdio.h>
#include <stdlib.h>
#include "gates.h"


int main(void){

	/* Greeting */
	printf("###########################################");
	printf("\nWelcome to Aimen Al-Refai's GateDriver!!\n");
	printf("###########################################\n\n\n");  
	
	/*these arrays have no NUL character, as they are not char strings, but bit strings*/
	char A[32] = "00000000000000001111111111111110";  
	char B[32] = "00000000000000000000000000000011";
	char D[32] = "00000000000000001111111111111110";
	char E[32] = "00000000000000000000000000000011";
	char C[32] = "00000000000000000000000000000000";
	char F[32] = "00000000000000000000000000000000";


	C[0] = AND2_1(A[0], B[0]);
	C[1] = AND2_1(A[1], B[1]);
	C[2] = AND2_1(A[2], B[2]);
	C[3] = AND2_1(A[3], B[3]);
	C[4] = AND2_1(A[4], B[4]);
	C[5] = AND2_1(A[5], B[5]);
	C[6] = AND2_1(A[6], B[6]);
	C[7] = AND2_1(A[7], B[7]);
	C[8] = AND2_1(A[8], B[8]);
	C[9] = AND2_1(A[9], B[9]);
	C[10] = AND2_1(A[10], B[10]);
	C[11] = AND2_1(A[11], B[11]);
	C[12] = AND2_1(A[12], B[12]);
	C[13] = AND2_1(A[13], B[13]);
	C[14] = AND2_1(A[14], B[14]);
	C[15] = AND2_1(A[15], B[15]);
	C[16] = AND2_1(A[16], B[16]);
	C[17] = AND2_1(A[17], B[17]);
	C[18] = AND2_1(A[18], B[18]);
	C[19] = AND2_1(A[19], B[19]);
	C[20] = AND2_1(A[20], B[20]);
	C[21] = AND2_1(A[21], B[21]);
	C[22] = AND2_1(A[22], B[22]);
	C[23] = AND2_1(A[23], B[23]);
	C[24] = AND2_1(A[24], B[24]);
	C[25] = AND2_1(A[25], B[25]);
	C[26] = AND2_1(A[26], B[26]);
	C[27] = AND2_1(A[27], B[27]);
	C[28] = AND2_1(A[28], B[28]);
	C[29] = AND2_1(A[29], B[29]);
	C[30] = AND2_1(A[30], B[30]);
	C[31] = AND2_1(A[31], B[31]); 
	AND2_32(F, D, E);
  
	printf("\nC[0-31] = AND2_1(A[0-31], B[0-31])");
	printf("\nA(%.32s) AND B(%.32s) =  C(%.32s) \n", A, B, C);
	printf("\nAND2_32(F,D,E)  This result should match the one above.");
	printf("\nD(%.32s) AND E(%.32s) =  F(%.32s) \n", D, E, F);  

	
	
/*****************

Next, add the following two-level combinatorial networks as follows, for inputs of width two bits.

   1. F = (A OR B) AND (C NOR D) NAND (D NOR B)
   2. Z = NOT(Y AND W) OR ( U AND V) OR (Y AND U) 

***********************/
	
	
  return 0;
}
/*end of driver*/
