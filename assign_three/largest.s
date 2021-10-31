     AREA     largest, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION
		MOV R0,#0x20000000
		ADD R1,R0,#0x00000005
		ADD R2,R1,#0x00000005
		MOV R4, #0x25
		MOV R5, #0x15
		MOV R6, #0x35
		STR R4,[R0]
		STR R5,[R1]   
		STR R6,[R2]
		LDR R7,[R0]
		LDR R8,[R1]
		LDR R9,[R2]
		MOV R3,R7 
		CMP R3,R8
		BLT K1 
		B K2
K1		MOV R3,R8 
K2      CMP R3,R9
		BLT RESULT
		B K3
RESULT	MOV R3,R9
K3      MOV R0, R3
		BL printMsg		
stop    B stop
	 ENDFUNC
	 END 
		
		
		
		