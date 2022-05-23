hargaSatuanBuku =      int(input("Masukan Harga Satuan Buku             : "))
jumlahBukuYangDibeli = int(input("Masukan Jumlah Buku Yang di Beli      : "))

beli = hargaSatuanBuku * jumlahBukuYangDibeli

if beli >=20 :
    diskon = beli*0.10
elif beli >100:
    diskon = beli*0.20
else :
    beli
    
totalHarga = beli-diskon

print("Harga : ",beli)
print("Total Harga : ", totalHarga)