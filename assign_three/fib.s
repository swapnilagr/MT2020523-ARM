     AREA     Fibonacci_series, CODE, READONLY
     EXPORT __main
     IMPORT printMsg

     ENTRY 
__main  FUNCTION
		MOV  r3, #9 
		MOV  r4, #1 
		MOV  r5, #1 
		SUB  r3, #1	
		
loop     	CMP r3, #0	
		BLE stop	
		
		ADD r4, r5	
		MOV r0, r4
		BL printMsg
		EOR r4, r5	
		EOR r5, r4
		EOR r4, r5
		SUB r3, #1	
		B loop		
stop           B stop 
	 ENDFUNC
	 END