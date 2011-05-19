#include "register_file.h"
#include <string.h>

char RegFile[32][32]={"00000000000000000000000000000000"};

int addr_decode_5(char addr[5]){
	int number=0;
	int i;
	for(i=0; i<5; i++){
		number+=(1<<i)*(addr[4-i]-'0');
	}
	return number;
}

void RegisterFileAccess(char ReadOut1[32],
                        char ReadOut2[32],
                        char ReadAddr1[5],
                        char ReadAddr2[5],
                        char WriteAddr[5],
                        char WriteIn[32],
                        int RegWrite ){
	if(WriteAddr !=NULL && RegWrite){
		int index = addr_decode_5(WriteAddr);
		if(index!=0)
			strncpy(RegFile[index], WriteIn, 32);
	}

	if(ReadAddr1 != NULL){
		strncpy(ReadOut1, RegFile[addr_decode_5(ReadAddr1)], 32);
	}

	if(ReadAddr2 != NULL){
		strncpy(ReadOut2, RegFile[addr_decode_5(ReadAddr2)], 32);
	}

}

