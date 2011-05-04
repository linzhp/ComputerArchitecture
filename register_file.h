#ifndef REGISTER_FILE_H_
#define REGISTER_FILE_H_


void RegisterFileAccess(char ReadOut1[32],
                        char ReadOut2[32],
                        char ReadAddr1[5],
                        char ReadAddr2[5],
                        char WriteAddr[5],
                        char WriteIn[32],
                        int RegWrite );

#endif /* REGISTER_FILE_H_ */
