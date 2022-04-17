#include <stdio.h>
#include <conio.h>

int main () {
    float r, luas;
    float phi = 3.14;

  printf("Masukan nilai dari jari-jari lingkaran: "); 
  scanf("%f", &r); // input jari-jari 
  // LUAS LINGKARAN = phi*r*r 
  luas = phi*r*r; // rumus dari LUAS LINGKARAN 
  printf("Luas lingkaran yang diperoleh adalah: %.2f", luas);
    return 0;

    
}