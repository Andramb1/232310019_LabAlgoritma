#include<iostream>
using namespace std;

int main () {
	int number = 0;
	int sum = 0;
	
	do {
		sum += number;
		cout << "Masukan Angka : ";
		cin >> number;
	}
	while (number >=1); //akan berkakhir saat input angka 0
	
	cout << "\nHasil Penjumlahan adalah " << sum << endl;
	return 0;
}
