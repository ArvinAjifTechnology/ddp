#include<stdio.h>
#include<conio.h>

int main() {
    float tjg, mk, gapok, gatot;
     printf("================================\n");
     printf("============Gaji Pegawai========\n");
     printf("================================\n");

    printf("Masukan Masa Kerja : "); scanf("%f",&mk);
    printf("Masukan Gaji Pokok : "); scanf("%f",&gapok);

    if (mk>3)
    {
        tjg= 0.2*gapok;
    }
    else
    {
        tjg= 0.1*gapok;
    }
    
    gatot = gapok+tjg;
    printf("Gaji Total : %10.0f", gatot);
    
    return 0;
}