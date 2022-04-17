program coba;

uses crt;

label
atas;

var
        pilih:integer;
        pilihan:char;
begin
        atas:
        clrscr;
        writeln(' 35 rumus kimia ');
        writeln;
        writeln('1. cau ');
        writeln('2. hui ');
        writeln('3. rujak');
        writeln('4. jeruk');
        writeln;


        write('pilihan 1sd5 : ');readln(pilih);
        writeln;



        if (pilih=1)then
                begin
                writeln('rumus dari cau adalah h3');
                end;
        if (pilih=2) then
                begin
                writeln('rumus dari hui adalah k1');
                end;
        if (pilih=3) then
                begin
                writeln('rujak');
                end;
        if (pilih=4) then
                begin
                writeln('jeruk');
                end;
        if (pilih>4) then
         begin
         writeln('melebihi batas');
         end;
        writeln;
        writeln('mau lanjut ? Y/T : ');readln(pilihan);
        writeln;

        if (pilihan='Y') then
                goto atas;
        if (pilihan='T') then
                begin
                writeln('terimakasih atas kunjungnnya');
                end;


end.