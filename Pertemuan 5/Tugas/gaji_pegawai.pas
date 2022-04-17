program gaji_pegawai;

var

tjg, mk, gapok, gatot : real;

begin
    writeln('================================');
    writeln('============Gaji Pegawai========');
    writeln('================================');
    write('Masukan Masa Kerja : ');read(mk);
    write('Masukan Masa Gaji Pokok : ');read(gapok);
        if (mk> 3) then
            tjg:=0.2*gapok
        else
            tjg:= 0.1*gapok;

    gatot :=gapok+tjg;
    write('Gaji Total : ', gatot:10:0);
            
end.