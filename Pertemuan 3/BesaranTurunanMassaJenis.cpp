#include<stdio.h>
#include<conio.h>

main(){
    // Massa Jenis
    float M;
    // Volume Jenis
    float V;
    // Massa Jenis
    float MassaJenis;

    printf("Masukkan Nilai Massa :"); scanf("%f",&M);
    printf("Msukkan Nilai Volume :"); scanf("%f", &V);

    MassaJenis=M/V;
    // MassaJenis=M;

    printf("Massa Jenis Nya Adalah : %10.3f",MassaJenis);printf(" kg/m3");

    getch();
}
