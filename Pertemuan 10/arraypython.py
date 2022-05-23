from re import T


nama = [
		["Nisa","Dimas","Irfan","Radit", "Reza"],
		["Puput","Mita","Sita","Mala", "Muthia"],
		["Muhammad Farhan","Nadia","Fahril","Sarah", "Ab"],
		["Susan","Rizki Esa Saputra","Siti Sarah","Yusup", "Neng Putri"],
		["Ali Ahmad","Gilang Gumelar","Agil","Putri Sriayu", "Akmal"],
		["Muhammad Rizky","Hopid","Fairuz","M Fikri","Muzaki"],
		["Egha","Gofur","Heryaman","Arvin", "Rama"],
		]

for i in  range (0,6,1) :
    print("Kelompok",i+1)
    for k in range(0,5,1) :
        print(k+1, nama[i][k])