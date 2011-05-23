*****************
**   Zhongpeng Lin
**	 cmpe110 s11
**   Project 3 ReadMe
**   05/23/2011
******************

The files submitted are:  gates.c    gates.h    gatedriver.c   MAKEFILE

HOW TO BUILD:
	Included is a MAKEFILE where in order to compile my programs all you must do is type in
	the command "make" in the same directory as the rest of my submitted files.
	
Functions:
	The 1-bit width functions all return chars so in order to call functions that deal with
	1-bit width inputs (no matter the # of inputs) you must set a variable equal to the function
	in order to save the output to a variable.
	The 2,8,16,32 bit-width functions each take in char arrays of the output(you would like 
	to save to) and the respective number of inputs based upon function call.

driver3:
	The driver function checks each required function in project 3. For each function, it prints
	the expected output and the actual output for comparison.
