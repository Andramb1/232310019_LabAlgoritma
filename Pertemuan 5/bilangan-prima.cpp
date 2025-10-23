#include<iostream>
using namespace std;

int main () {
	int a;
	bool prima = true;
	
	cout << "Program Menentukan Bilangan Prima" << endl;
	cout << "Masukan Nilai : ";
	cin >> a;
	
	if(a <= 1) {
		prima = false;
	} else {
		for (int b = 2; b <= /2; i++ ) {
			if ( a % b == 0) {
				prima = false;
				break;
			}
		}
	}
	
	if(prima)
		cout << "Termasuk Bilangan Prima" << endl;
	else 
		cout << "Bukan Termasuk Bilangan Prima" << endl;
	
	return 0;
}
