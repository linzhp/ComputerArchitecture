/*********************
# Zhongpeng Lin
# driver 
*********************/

#include <stdio.h>
#include <stdlib.h>
#include "gates.h"


int main(void){

	/* Greeting */
	printf("###########################################");
	printf("\nWelcome to Zhongpeng Lin's GateDriver!!\n");
	printf("###########################################\n\n\n");  
	
	/*these arrays have no NUL character, as they are not char strings, but bit strings*/
	char A[32] = "00000010000000001111111111111110";
	char B[32] = "00000010000000000000000000000011";
	char D[32] = "00000010000000001111111111111110";
	char E[32] = "00000010000000000000000000000011";
	char F[32] = "01001010000100000010000111110000";
	char G[32] = "10100010000111111111100000000000";
	char H[32] = "10000010110000000011000111111000";
	char I[32] = "10111110000111100001100000000111";
	char C[32] = "00000000000000000000000000000000";

	C[0] = NOT1_1(A[0]);
	printf("\nNOT A[0](%c) = C[0](%c)\n", A[0], C[0]);
	NOT1_32(C,A);
	printf("NOT A(%.32s) = C(%.32s)\n",A, C);

	C[0] = AND2_1(A[0], B[0]);
	printf("\nA[0](%c) AND B[0](%c) = C[0](%c)\n", A[0], B[0],C[0]);
	AND2_32(C, A, B);
	printf("A(%.32s) AND B(%.32s) = C(%.32s)\n", A, B, C);
	C[0] = AND3_1(A[0], A[1], A[2]);
	printf("A[0](%c) AND A[1](%c) AND A[2] = C[0](%c)\n", A[0], A[1], A[2], C[0]);
	AND3_32(C, A, B, D);
	printf("A(%.32s) AND B(%.32s) AND D(%.32s) = C(%.32s)\n", A, B, D, C);
	C[0] = AND4_1(A[0], B[0], D[0], E[0]);
	printf("A[0](%c) AND B[0](%c) AND D[0](%c) AND E[0](%c) = C(%c)\n", A[0], B[0], D[0], E[0], C[0]);
	AND4_32(C, A, B, D, E);
	printf("A(%.32s) AND B(%.32s) AND D(%.32s) AND E(%.32s)= C(%.32s)\n", A, B, D, E, C);
	C[0] = AND6_1(A[0], B[0], D[0], E[0], F[0], G[0]);
	printf("A[0](%c) AND B[0](%c) AND D[0](%c) AND E[0](%c) AND F[0](%c) AND G[0](%c)= C[0](%c)\n", A[0], B[0], D[0], E[0], F[0], G[0], C[0]);
	AND6_32(C, A, B, D, E, F, G);
	printf("A(%.32s) AND B(%.32s) AND D(%.32s) AND E(%.32s) AND F(%.32s) AND G(%.32s)= C(%.32s)\n", A, B, D, E, F, G, C);
	C[0] = AND8_1(A[0], B[0], D[0], E[0], F[0], G[0], H[0], I[0]);
	printf("A[0](%c) AND B[0](%c) AND D[0](%c) AND E[0](%c) AND F[0](%c) AND G[0](%c) AND H[0](%c) AND I[0](%c)= C[0](%c)\n", A[0], B[0], D[0], E[0], F[0], G[0], H[0], I[0], C[0]);
	AND8_32(C, A, B, D, E, F, G, H, I);
	printf("A(%.32s) AND B(%.32s) AND D(%.32s) AND E(%.32s) AND F(%.32s) AND G(%.32s) AND H(%.32s) AND I(%.32s)= C(%.32s)\n", A, B, D, E, F, G, H, I, C);

	C[0] = OR2_1(A[0], B[0]);
	printf("\nA[0](%c) OR B[0](%c) = C[0](%c)\n", A[0], B[0],C[0]);
	OR2_32(C, A, B);
	printf("A(%.32s) OR B(%.32s) = C(%.32s)\n", A, B, C);
	C[0] = OR3_1(A[0], A[1], A[2]);
	printf("A[0](%c) OR A[1](%c) OR A[2] = C[0](%c)\n", A[0], A[1], A[2], C[0]);
	OR3_32(C, A, B, D);
	printf("A(%.32s) OR B(%.32s) OR D(%.32s) = C(%.32s)\n", A, B, D, C);
	C[0] = OR4_1(A[0], B[0], D[0], E[0]);
	printf("A[0](%c) OR B[0](%c) OR D[0](%c) OR E[0](%c) = C(%c)\n", A[0], B[0], D[0], E[0], C[0]);
	OR4_32(C, A, B, D, E);
	printf("A(%.32s) OR B(%.32s) OR D(%.32s) OR E(%.32s)= C(%.32s)\n", A, B, D, E, C);
	C[0] = OR6_1(A[0], B[0], D[0], E[0], F[0], G[0]);
	printf("A[0](%c) OR B[0](%c) OR D[0](%c) OR E[0](%c) OR F[0](%c) OR G[0](%c)= C[0](%c)\n", A[0], B[0], D[0], E[0], F[0], G[0], C[0]);
	OR6_32(C, A, B, D, E, F, G);
	printf("A(%.32s) OR B(%.32s) OR D(%.32s) OR E(%.32s) OR F(%.32s) OR G(%.32s)= C(%.32s)\n", A, B, D, E, F, G, C);
	C[0] = OR8_1(A[0], B[0], D[0], E[0], F[0], G[0], H[0], I[0]);
	printf("A[0](%c) OR B[0](%c) OR D[0](%c) OR E[0](%c) OR F[0](%c) OR G[0](%c) OR H[0](%c) OR I[0](%c)= C[0](%c)\n", A[0], B[0], D[0], E[0], F[0], G[0], H[0], I[0], C[0]);
	OR8_32(C, A, B, D, E, F, G, H, I);
	printf("A(%.32s) OR B(%.32s) OR D(%.32s) OR E(%.32s) OR F(%.32s) OR G(%.32s) OR H(%.32s) OR I(%.32s)= C(%.32s)\n", A, B, D, E, F, G, H, I, C);

	C[0] = NAND2_1(A[0], B[0]);
	printf("\nA[0](%c) NAND B[0](%c) = C[0](%c)\n", A[0], B[0],C[0]);
	NAND2_32(C, A, B);
	printf("A(%.32s) NAND B(%.32s) = C(%.32s)\n", A, B, C);
	C[0] = NAND3_1(A[0], A[1], A[2]);
	printf("A[0](%c) NAND A[1](%c) NAND A[2] = C[0](%c)\n", A[0], A[1], A[2], C[0]);
	NAND3_32(C, A, B, D);
	printf("A(%.32s) NAND B(%.32s) NAND D(%.32s) = C(%.32s)\n", A, B, D, C);
	C[0] = NAND4_1(A[0], B[0], D[0], E[0]);
	printf("A[0](%c) NAND B[0](%c) NAND D[0](%c) NAND E[0](%c) = C(%c)\n", A[0], B[0], D[0], E[0], C[0]);
	NAND4_32(C, A, B, D, E);
	printf("A(%.32s) NAND B(%.32s) NAND D(%.32s) NAND E(%.32s)= C(%.32s)\n", A, B, D, E, C);
	C[0] = NAND6_1(A[0], B[0], D[0], E[0], F[0], G[0]);
	printf("A[0](%c) NAND B[0](%c) NAND D[0](%c) NAND E[0](%c) NAND F[0](%c) NAND G[0](%c)= C[0](%c)\n", A[0], B[0], D[0], E[0], F[0], G[0], C[0]);
	NAND6_32(C, A, B, D, E, F, G);
	printf("A(%.32s) NAND B(%.32s) NAND D(%.32s) NAND E(%.32s) NAND F(%.32s) NAND G(%.32s)= C(%.32s)\n", A, B, D, E, F, G, C);
	C[0] = NAND8_1(A[0], B[0], D[0], E[0], F[0], G[0], H[0], I[0]);
	printf("A[0](%c) NAND B[0](%c) NAND D[0](%c) NAND E[0](%c) NAND F[0](%c) NAND G[0](%c) NAND H[0](%c) NAND I[0](%c)= C[0](%c)\n", A[0], B[0], D[0], E[0], F[0], G[0], H[0], I[0], C[0]);
	NAND8_32(C, A, B, D, E, F, G, H, I);
	printf("A(%.32s) NAND B(%.32s) NAND D(%.32s) NAND E(%.32s) NAND F(%.32s) NAND G(%.32s) NAND H(%.32s) NAND I(%.32s)= C(%.32s)\n", A, B, D, E, F, G, H, I, C);

	C[0] = NOR2_1(A[0], B[0]);
	printf("\nA[0](%c) NOR B[0](%c) = C[0](%c)\n", A[0], B[0],C[0]);
	NOR2_32(C, A, B);
	printf("A(%.32s) NOR B(%.32s) = C(%.32s)\n", A, B, C);
	C[0] = NOR3_1(A[0], A[1], A[2]);
	printf("A[0](%c) NOR A[1](%c) NOR A[2] = C[0](%c)\n", A[0], A[1], A[2], C[0]);
	NOR3_32(C, A, B, D);
	printf("A(%.32s) NOR B(%.32s) NOR D(%.32s) = C(%.32s)\n", A, B, D, C);
	C[0] = NOR4_1(A[0], B[0], D[0], E[0]);
	printf("A[0](%c) NOR B[0](%c) NOR D[0](%c) NOR E[0](%c) = C(%c)\n", A[0], B[0], D[0], E[0], C[0]);
	NOR4_32(C, A, B, D, E);
	printf("A(%.32s) NOR B(%.32s) NOR D(%.32s) NOR E(%.32s)= C(%.32s)\n", A, B, D, E, C);
	C[0] = NOR6_1(A[0], B[0], D[0], E[0], F[0], G[0]);
	printf("A[0](%c) NOR B[0](%c) NOR D[0](%c) NOR E[0](%c) NOR F[0](%c) NOR G[0](%c)= C[0](%c)\n", A[0], B[0], D[0], E[0], F[0], G[0], C[0]);
	NOR6_32(C, A, B, D, E, F, G);
	printf("A(%.32s) NOR B(%.32s) NOR D(%.32s) NOR E(%.32s) NOR F(%.32s) NOR G(%.32s)= C(%.32s)\n", A, B, D, E, F, G, C);
	C[0] = NOR8_1(A[0], B[0], D[0], E[0], F[0], G[0], H[0], I[0]);
	printf("A[0](%c) NOR B[0](%c) NOR D[0](%c) NOR E[0](%c) NOR F[0](%c) NOR G[0](%c) NOR H[0](%c) NOR I[0](%c)= C[0](%c)\n", A[0], B[0], D[0], E[0], F[0], G[0], H[0], I[0], C[0]);
	NOR8_32(C, A, B, D, E, F, G, H, I);
	printf("A(%.32s) NOR B(%.32s) NOR D(%.32s) NOR E(%.32s) NOR F(%.32s) NOR G(%.32s) NOR H(%.32s) NOR I(%.32s)= C(%.32s)\n", A, B, D, E, F, G, H, I, C);

	C[0] = XOR2_1(A[0], B[0]);
	printf("\nA[0](%c) XOR B[0](%c) = C[0](%c)\n", A[0], B[0],C[0]);
	XOR2_32(C, A, B);
	printf("A(%.32s) XOR B(%.32s) = C(%.32s)\n", A, B, C);
	C[0] = XOR3_1(A[0], A[1], A[2]);
	printf("A[0](%c) XOR A[1](%c) XOR A[2] = C[0](%c)\n", A[0], A[1], A[2], C[0]);
	XOR3_32(C, A, B, D);
	printf("A(%.32s) XOR B(%.32s) XOR D(%.32s) = C(%.32s)\n", A, B, D, C);
	C[0] = XOR4_1(A[0], B[0], D[0], E[0]);
	printf("A[0](%c) XOR B[0](%c) XOR D[0](%c) XOR E[0](%c) = C(%c)\n", A[0], B[0], D[0], E[0], C[0]);
	XOR4_32(C, A, B, D, E);
	printf("A(%.32s) XOR B(%.32s) XOR D(%.32s) XOR E(%.32s)= C(%.32s)\n", A, B, D, E, C);
	C[0] = XOR6_1(A[0], B[0], D[0], E[0], F[0], G[0]);
	printf("A[0](%c) XOR B[0](%c) XOR D[0](%c) XOR E[0](%c) XOR F[0](%c) XOR G[0](%c)= C[0](%c)\n", A[0], B[0], D[0], E[0], F[0], G[0], C[0]);
	XOR6_32(C, A, B, D, E, F, G);
	printf("A(%.32s) XOR B(%.32s) XOR D(%.32s) XOR E(%.32s) XOR F(%.32s) XOR G(%.32s)= C(%.32s)\n", A, B, D, E, F, G, C);
	C[0] = XOR8_1(A[0], B[0], D[0], E[0], F[0], G[0], H[0], I[0]);
	printf("A[0](%c) XOR B[0](%c) XOR D[0](%c) XOR E[0](%c) XOR F[0](%c) XOR G[0](%c) XOR H[0](%c) XOR I[0](%c)= C[0](%c)\n", A[0], B[0], D[0], E[0], F[0], G[0], H[0], I[0], C[0]);
	XOR8_32(C, A, B, D, E, F, G, H, I);
	printf("A(%.32s) XOR B(%.32s) XOR D(%.32s) XOR E(%.32s) XOR F(%.32s) XOR G(%.32s) XOR H(%.32s) XOR I(%.32s)= C(%.32s)\n", A, B, D, E, F, G, H, I, C);

	C[0] = XNOR2_1(A[0], B[0]);
	printf("\nA[0](%c) XNOR B[0](%c) = C[0](%c)\n", A[0], B[0],C[0]);
	XNOR2_32(C, A, B);
	printf("A(%.32s) XNOR B(%.32s) = C(%.32s)\n", A, B, C);
	C[0] = XNOR3_1(A[0], A[1], A[2]);
	printf("A[0](%c) XNOR A[1](%c) XNOR A[2] = C[0](%c)\n", A[0], A[1], A[2], C[0]);
	XNOR3_32(C, A, B, D);
	printf("A(%.32s) XNOR B(%.32s) XNOR D(%.32s) = C(%.32s)\n", A, B, D, C);
	C[0] = XNOR4_1(A[0], B[0], D[0], E[0]);
	printf("A[0](%c) XNOR B[0](%c) XNOR D[0](%c) XNOR E[0](%c) = C(%c)\n", A[0], B[0], D[0], E[0], C[0]);
	XNOR4_32(C, A, B, D, E);
	printf("A(%.32s) XNOR B(%.32s) XNOR D(%.32s) XNOR E(%.32s)= C(%.32s)\n", A, B, D, E, C);
	C[0] = XNOR6_1(A[0], B[0], D[0], E[0], F[0], G[0]);
	printf("A[0](%c) XNOR B[0](%c) XNOR D[0](%c) XNOR E[0](%c) XNOR F[0](%c) XNOR G[0](%c)= C[0](%c)\n", A[0], B[0], D[0], E[0], F[0], G[0], C[0]);
	XNOR6_32(C, A, B, D, E, F, G);
	printf("A(%.32s) XNOR B(%.32s) XNOR D(%.32s) XNOR E(%.32s) XNOR F(%.32s) XNOR G(%.32s)= C(%.32s)\n", A, B, D, E, F, G, C);
	C[0] = XNOR8_1(A[0], B[0], D[0], E[0], F[0], G[0], H[0], I[0]);
	printf("A[0](%c) XNOR B[0](%c) XNOR D[0](%c) XNOR E[0](%c) XNOR F[0](%c) XNOR G[0](%c) XNOR H[0](%c) XNOR I[0](%c)= C[0](%c)\n", A[0], B[0], D[0], E[0], F[0], G[0], H[0], I[0], C[0]);
	XNOR8_32(C, A, B, D, E, F, G, H, I);
	printf("A(%.32s) XNOR B(%.32s) XNOR D(%.32s) XNOR E(%.32s) XNOR F(%.32s) XNOR G(%.32s) XNOR H(%.32s) XNOR I(%.32s)= C(%.32s)\n", A, B, D, E, F, G, H, I, C);

/*****************

Next, add the following two-level combinatorial networks as follows, for inputs of width two bits.

   1. F = (A OR B) AND (C NOR D) NAND (D NOR B)
   2. Z = NOT(Y AND W) OR ( U AND V) OR (Y AND U) 

***********************/
	
	
  return 0;
}
/*end of driver*/
