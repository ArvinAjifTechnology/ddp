program Menghitung_Luas_Permukaan_Kubus;

uses crt;

var
        s1,s2,luas:real;


begin
        clrscr;
        writeln('========= Menghitung Luas Permukaan Kubus =========');
        write('Masukkan nilai s1 kubus    =   ');readln(s1);
        write('Masukkan nilai s2 kubus    =   ');readln(s2);

        luas:=6*s1*s2;

        writeln('==========================================');
        writeln('Luas Permukaan Kubus dalam bentuk desimal : ',luas:4:2);
        writeln('Luas Permukaan Kubus dalam bentuk bilangan bulat : ',luas:4:0);
        readln;

end.
