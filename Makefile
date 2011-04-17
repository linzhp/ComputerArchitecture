##################################                                             
#                                                                                        
#  Last update: 03-06-09       
#                                                                                        
#  Aimen Al-Refai 
#  Commands: 
#  make all, make clean, make
#                                                                                   
###################################                                                                      

C    = gcc
OBJ  = gatedriver.o gates.o 
LINKOBJ  = gatedriver.o gates.o 

BIN  = runGates
RM = rm -f *~

.PHONY: all clean

all:  runGates                                                                                

clean:
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(C) $(LINKOBJ) -o "runGates"

mygatedriver.o: gatedriver.c gates.h
	$(C) -c gatedriver.c
	
mygates.o: gates.c gates.h
	$(C) -c -ansi -Wall gates.c
	
