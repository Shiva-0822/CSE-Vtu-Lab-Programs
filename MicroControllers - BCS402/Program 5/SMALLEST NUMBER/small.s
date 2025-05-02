    AREA SMALLEST, CODE, READONLY
ENTRY
START
    LDR R0, A;
    LDR R2, [R0];
    MOV R5, #3;
NEXT
    ADD R0, R0, #4;
    LDR R3, [R0];
    CMP R2, R3;
    BLS SMALL;
    MOV R2, R3;
SMALL
    SUBS R5, R5, #1;
    BNE  NEXT;
    LDR  R1, RES;
    STR  R2, [R1];
STOP B STOP
A   DCD 0x40000000;
RES DCD 0x40000020;
END
