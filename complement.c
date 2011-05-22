#include "complement.h"
#include "gates.h"
#include "adders.h"

void complement(char result[32], char in1[32]){
	NOT1_32(result, in1);
	AddRCA_32(result, result, "00000000000000000000000000000001", '0');
}
