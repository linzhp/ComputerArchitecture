#include "register_file.h"
#include <string.h>

char RegFile[32][32]={"00000000000000000000000000000000"};

int addr_decode(char addr[5]){
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
		int index = addr_decode(WriteAddr);
		if(index!=0)
			strcpy(RegFile[index], WriteIn);
	}

	if(ReadAddr1 != NULL){
		strcpy(ReadOut1, RegFile[addr_decode(ReadAddr1)]);
	}

	if(ReadAddr2 != NULL){
		strcpy(ReadOut2, RegFile[addr_decode(ReadAddr2)]);
	}

}

