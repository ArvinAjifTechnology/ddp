#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){
	char nama[7][5][18]={
		{"Nisa","Dimas","Irfan","Radit", "Reza"},
		{"Puput","Mita","Sita","Mala", "Muthia"},
		{"Muhammad Farhan","Nadia","Fahril","Sarah", "Ab"},
		{"Susan","Rizki Esa Saputra","Siti Sarah","Yusup", "Neng Putri"},
		{"Ali Ahmad","Gilang Gumelar","Agil","Putri Sriayu", "Akmal"},
		{"Muhammad Rizky","Hopid","Fairuz","M Fikri","Muzaki"},
		{"Egha","Gofur","Heryaman","Arvin", "Rama"},
		};

    cout<<"Kelompok DDP " << endl;
	for(int i=0;i<=6;i++){
		
		printf("Kelompok %d \n",i+1);
		for(int k=0;k<5;k++){
			printf("     %d.%s     \n ",k+1,nama[i][k]);
		}
		cout<<endl;
	}
}