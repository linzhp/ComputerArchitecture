#include "ALU.h"
#include <string.h>
#include "adders.h"
#include "gates.h"
#include "complement.h"
#include "bwextenders.h"

char ALU (char result[32], char in1[32], char in2[32], char operation[3]){
	if(strncmp(operation, "010", 3) == 0){
		AddRCA_32(result, in1, in2, '0');
	} else if(strncmp(operation, "000", 3) == 0){
		AND2_32(result, in1, in2);
	} else if(strncmp(operation, "001", 3) == 0){
		OR2_32(result, in1, in2);
	} else if(strncmp(operation, "11", 2) == 0){
		NOT1_32(result, in2);
		AddRCA_32(result, in1, result, '1');
		if(operation[2]=='1'){
			BWExtend1_32(result, result[0]);
		}
	} else if(strncmp(operation, "011", 3) == 0){
		complement(result, in1);
	}
	if(memchr(result, '1', 32))
		return '0';
	else
		return '1';
}
