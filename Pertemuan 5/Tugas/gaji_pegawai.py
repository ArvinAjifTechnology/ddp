print("===============================")
print("============Gaji Pegawai=======")
print("===============================")

mk = float(input("Masukan Masa Kerja : "))
gapok = float(input("Masukan Gaji Pokok : "))

if mk>3:
    tjg= 0.2*gapok
else :
    tjg= 0.1*gapok
    
gatot = gapok+tjg

print("Gaji Total" ,gatot)
    
