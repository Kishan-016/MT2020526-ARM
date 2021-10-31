     AREA     largestinarr, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION
		MOV R1, #0x20000000 
		MOV R2,#0x15
		MOV R3,#0x25
		MOV R4,#0x35
		STR R2,[R1]
		ADD R1, #0x4
		STR R3,[R1]
        ADD R1, #0x4		
		STR R4,[R1]
		MOV R1, #0x20000000 
		LDR R5,[R1]
		ADD R1, #0x4
		LDR R6,[R1]
		ADD R1, #0x4
		LDR R7,[R1] 
		MOV R8,R5
		CMP R8,R6
		BLT K1
		B K2
K1		MOV R8,R6 
K2      CMP R8,R7
		BLT RESULT
		B K3
RESULT 	MOV R8,R7
K3      MOV R0, R8
        BL printMsg
stop    B stop 
	ENDFUNC
	END 
		
		
		
		