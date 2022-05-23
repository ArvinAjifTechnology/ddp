    # b = [ 0.02, 0.04, 0.06, 0.075]
    # else:
    #     b = 0
def garis() :
    print("==========================")
print("**Perhitungan Kredit Pinjaman**")
garis()
print("Input Data Nasabah")
garis()
bungaPinjaman = [  ]
nama = input("Masukkan Nama             : ")
p = float(input("Besar Pinjaman           : Rp.  "))

print("Jangka Waktu Pinjaman")
print("1. 6 Bulan ")
pil = int(input("Jangka Waktu Pinjaman    : "))

if pil == 1 :
    j = 6
    b = 0.02
if pil == 2 :
    j = 12
    b = 0.04
if pil == 3 :
    j = 24
    b= 0.06
if pil == 4 :
    j = 36
    b = 0.075
    
def hitungcpp (p,j) :
    global cpp
    cpp = p/j
    return cpp
 
def hitungcbp (p,b,j) :
    global cbp
    cbp = (p*b)/j
    return cbp
    
def tcp () :
    return cpp+cbp

def tbp() :
    for i in range (0,3) :
        print(b[i]*100)
        
garis()
print("Hasil Perhitungan Kredit")
garis()

print("Nama Lengkap                     :", nama)
print("Besar Pinjaman                   : " ,p)
print("Jangka Waktu Pinjaman            : ", j)
print("Bunga Pinjaman                   : ", b*100 , "%")
print("Cicilan Pokok Perbulan (CPP)     : Rp. ", hitungcpp(p,j))
print("Cicilan Bunga Perbulan (CBP)     : Rp. ", hitungcbp(p,b,j))
print("Total Cicilan Perbulan (TCP)     : Rp.", tcp())