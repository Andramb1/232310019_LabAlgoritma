#include<iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
	char kata [20];
	float angka, a, b;
	
	cout <<"Masukan Angka Kata Berupa Angka : ";
	cin >> kata;
	
	angka=atof(kata);
	a = angka + 5;
	
	cout << "Hasil Perubahan Ditambah Dengan 5 = " <<a;
	
	getchar();
	
}
