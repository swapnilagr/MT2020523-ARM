     AREA     largest_in_aray, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
     ENTRY 
__main  FUNCTION
		MOV R1, #0x20000000
		ADD R2,R1,#0x00000005
		ADD R3,R2,#0x00000005
		MOV R4, #0x16
		MOV R5, #0x17
		MOV R6, #0x18
		STR R4,[R1]
		STR R5,[R2]   
		STR R6,[R3]
		LDR R7,[R1]
		LDR R8,[R2]
		LDR R9,[R3]
		MOV R10,R7 
		CMP R10,R8
		BGT L1  
		MOV R10,R8 
L1      CMP R10,R9
		BGT RES
		MOV R10,R9
RES		MOV R0, R10
  	    BL printMsg
stop    B stop 
	 ENDFUNC
	 END 