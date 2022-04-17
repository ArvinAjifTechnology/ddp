#include<stdio.h>
#include<conio.h>


main(){
    float s1,s2,luas;

    printf("Masukan Nilai Sisi 1 Kubus : ");scanf("%f",&s1);
    printf("Masukan Nilai Sisi 2 Kubus : ");scanf("%f",&s2);

    luas=6*s1*s2;

    printf("Luas Permukaan Kubus Dalam Bentuk Desimal : %10.0f\n",luas);
    printf("Luas Permukaan Kubus Dalam Bentuk Bilangan Bulat : %10.3f\n",luas);
    getch();
    
}
