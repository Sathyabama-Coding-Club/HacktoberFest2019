PROGRAM SEQUENTIAL_SEARCH;
USES WINCRT;
VAR
        CARI            : INTEGER;
        DATA            : ARRAY[1..100] OF INTEGER;
        N,I,J,INDEKS    : INTEGER;
        
FUNCTION SEQUEN(CARI: INTEGER): INTEGER;
BEGIN
        I:=1;
        WHILE ((I<N) AND (DATA[I]<>CARI)) DO
        I:= I+1;
                IF DATA[I]= CARI THEN
                        SEQUEN:=I
                ELSE
                        SEQUEN:=0;
END;
PROCEDURE MAIN;
BEGIN   WRITELN('--------------------------------------');
        WRITELN('         PENCARIAN SQUENTIAL        ');
        WRITELN('--------------------------------------');
        WRITE('JUMLAH DATA : '); READLN(N);
        WRITELN;
                FOR I:= 1 TO N DO
                BEGIN
                WRITE('INDEKS [',I,'] : '); READLN(DATA[I]);
                END;
                WRITELN;

        WRITE('CARI     : '); READLN(CARI);
        INDEKS:=SEQUEN(CARI);
        WRITELN;
        IF INDEKS <> 0 THEN
        BEGIN
                WRITELN('DATA YANG DICARI : ',CARI);
                WRITELN('DITEMUKAN PADA INDEKS KE-',INDEKS);
        END
        ELSE
                WRITE(CARI,' TIDAK DITEMUKAN');
END;

BEGIN
MAIN;
END.