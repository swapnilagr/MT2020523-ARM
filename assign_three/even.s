     AREA     even_array, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
     ENTRY 
__main  FUNCTION
		MOV R0, #00 
		MOV R1, #03 
		MOV R2, #0x20000000 
		MOV R3,#0x2
		MOV R4,#0x12
		MOV R5,#0x13
		STR R3,[R2]
		ADD R2,#0x4
		STR R4,[R2] 
		ADD R2,#0x4
		STR R5,[R2]
		MOV R2, #0x20000000
		LDR R6,[R2]  
		
J1		TST R6,#01
		BNE J2
		ADD R0,#01 
J2 		ADD R2,#0x4 
		LDR R6,[R2]
		SUBS R1,R1,#01  
		CMP R1,#00
		BNE J1	
		BL printMsg
stop    B stop ; stop program
	ENDFUNC
	END