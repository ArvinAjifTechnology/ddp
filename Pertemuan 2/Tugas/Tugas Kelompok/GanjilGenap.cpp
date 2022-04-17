#include <stdio.h>
#include <conio.h>

int main () {
    int bil;
    printf("Masukkan Bilangan : ");scanf("%d",&bil);

    if (bil % 2 == 0)
    {
        /* code */
    printf("Bilangan %d adalah genap.\n", bil);
    }
    else
    {
        printf("Bilangan %d adalah ganjil.\n", bil);
    }
    return 0;

    
}