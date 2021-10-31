     AREA     eveninarr, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 IMPORT printMsg2p
	 IMPORT printMsg4p
     ENTRY 
__main  FUNCTION
		MOV R0, #00 ;R0 will store number of even numbers in Array
		MOV R2, #0x20000000 ;starting address of Array elements
		MOV R3,#0x08
		MOV R4,#0x02
		MOV R5,#0x06
		STR R3,[R2]
		ADD R2, #0x4
		STR R4,[R2]
		ADD R2, #0x4
		STR R5,[R2]
		MOV R2, #0x20000000
		LDR R6,[R2]
		ADD R2, #0x4
		LDR R7,[R2]
		ADD R2, #0x4
		LDR R8,[R2]
		TST R6,#01  ;Perform AND
		BNE K1 ;if Zero flag isnt set then the number isnt even...
		ADD R0, #01 ;Increment even number count by 1
K1		TST R7,#01
		BNE K2
		ADD R0, #01
K2		TST R8, #01
        BNE PRINT
		ADD R0,#01
PRINT	    BL printMsg
stop    B stop ; stop program
	ENDFUNC
	END 
		
		
		
		