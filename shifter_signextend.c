#include "shifter_signextend.h"
#include "bwextenders.h"
#include <string.h>

void shiftleft2x(char out[32], char in[32]){
	strncpy(out, &in[2], 30);
	out[30]='0';
	out[31]='0';
}

void signextend(char out[32], char in[16]){
	BWExtend1_16(out, in[0]);
	strncpy(&out[16], in, 16);
}
