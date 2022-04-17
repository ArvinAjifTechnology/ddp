#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
awal:
    int pilih, m, molekul;
    char pilihan;
    string ulang = " ";
    do
    {
    printf("//==Dasar rumus senyawa kimia==\\ \n");
        printf("1. Air \n");
        printf("2. Helium \n");
        printf("3. Natrium Karbonat \n");
        printf("4. Metana \n");
        printf("5. Karbon Dioksida \n ");

       printf("^_^ Pilih senyawa 1-5 yang ingin dihitung : ");scanf("%d",&pilih);
       printf("--> Masukkan jumlah molekul : ");scanf("%d",&molekul);
       m=molekul;
    switch(pilih)
    {
        case 1 :
        {
            printf("-> Rumus dari Air adalah H2O \n");
            printf("-> jika di tambahkan sebuah molekul dari anda rumusnya akan menjadi %10.0d ",m);printf("H2O \n");
            break;
        }
        case 2 :
        {
            printf("-> Rumus dari Helium adalah He \n");
            printf("-> jika di tambahkan sebuah molekul dari anda rumusnya akan menjadi %10.0d ",m);printf("He \n");
            break;
        }
        case 3 :
        {
            printf("-> Rumus dari Natrium Karbonat adalah Na2CO3 \n");
            printf("-> jika di tambahkan sebuah molekul dari anda rumusnya menjadi %10.0d ",m);printf("Na2CO3 \n");
            break;
        }
        case 4 :
        {
            printf("-> Rumus dari Metana adalah CH4 \n");
            printf("-> jika di tambahkan sebuah molekul dari anda rumusnya akan menjadi %10.0d ",m);printf("CH4 \n");
            break;
        }
        case 5 :
        {
            printf("-> Rumus dari Karbon Dioksida adalah CO2 \n");
            printf("-> jika di tambahkan sebuah molekul dari anda rumusnya akan menjadi %10.0d ",m);printf("CO2 \n");
            break;
        }
    default :
    printf("Pilihan Yang Di Input Tidak Sesuai");
    }
    getch();
        printf("mau lanjut ? Y/T :"); scanf("%s",&ulang);
    }
    while(ulang =="y" || ulang == "Y");
        system("cls");
        printf("Terimakasih Telah Mencoba \n");
	
getch();

}

