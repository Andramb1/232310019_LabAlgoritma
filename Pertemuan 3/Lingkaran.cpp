#include<iostream>
#include<cmath>
using namespace std;

float LuasLingkaran (float pi, float r) {
	float pangkat = 2.0;
	float p2=pow(r,pangkat);

}

int main () {
	float pi = 3.14;
	float r;
	cout << "Masukan Jari Jari = ";
	cin >> r;
	
	float Hasil = LuasLingkaran(pi,r);
	
	cout << "Luas = Pi x r²" << endl;
	cout << "Luas = " << pi << "*" << r << "^2" << endl;
	cout << "Hasil Luas Lingkaran = " << Hasil << endl;
	
	return 0;
}
