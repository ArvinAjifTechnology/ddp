program coba;

uses crt;

label
atas;

var
        pilih, m:integer;
        pilihan:char;
begin
        atas:
        clrscr;
        writeln('//==Dasar rumus senyawa kimia==\\');
        writeln;
        writeln('1. Air ');
        writeln('2. Helium ');
        writeln('3. Natrium Karbonat ');
        writeln('4. Metana ');
        writeln('5. Karbon Dioksida ');
        writeln;


        write('^_^ Pilih senyawa 1-5 yang ingin dihitung : ');readln(pilih);
        write('--> Masukkan jumlah molekul : ');readln(m);
        writeln;


        if (pilih=1)then
        begin
                writeln('-> Rumus dari Air adalah H2O');read;
                writeln('-> jika di tambahkan sebuah molekul dari anda rumusnya akan menjadi ',m,'H2O');
        end;
        if (pilih=2) then
        begin
                writeln('-> Rumus dari Helium adalah He');read;
                writeln('-> jika di tambahkan sebuah molekul dari anda rumusnya akan menjadi ',m,'He');
        end;
        if (pilih=3) then
        begin
                writeln('-> Rumus dari Natrium Karbonat adalah Na2CO3 ');read;
                writeln('-> jika di tambahkan sebuah molekul dari anda rumusnya menjadi ',m,'Na2CO3');
        end;
        if (pilih=4) then
        begin
                writeln('-> Rumus dari Metana adalah CH4');read;
                writeln('-> jika di tambahkan sebuah molekul dari anda rumusnya akan menjadi ',m,'CH4');
        end;
        if (pilih=5) then
        begin
                writeln('-> Rumus dari Karbon Dioksida adalah CO2');read;
                writeln('-> jika di tambahkan sebuah molekul dari anda rumusnya akan menjadi ',m,'CO2');
        end;
        if (pilih>5) then
        begin
            writeln('-x Silahkan pilin no senyawa yang tersedia 1 sampai 5, terima kasih ^-^ x-');
        end;

        begin
        writeln;
        writeln('mau lanjut ? y/t : ');readln(pilihan);
        writeln;
        end;

        if (pilihan='y') then
                goto atas;
        if (pilihan='t') then
                begin
                writeln('\^o^/ Terima kasih telah mencoba!');
                end;
readln;


end.