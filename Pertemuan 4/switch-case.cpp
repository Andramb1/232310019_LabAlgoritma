#include<iostream>
using namespace std;

int main () {	
	string nama;
	int n1,n2,n3;
	int rata2;
	
	cout << "Program Hitung Rata-Rata" <<endl;
	
	cout << "Nama Siswa : ";
	getline(cin,nama);
	
	cout << " Nilai Pertandingan I : ";
	cin >> n1;	
	
	cout << "Nilai Pertandingan II : ";
	cin >> n2;
	
	cout << "Nilai Pertandingan III : ";
	cin >> n3;
	rata2 = (n1+n2+n3)/3;
	cout << "Siswa Yang Bernama " << nama << endl;
	
	cout <<"Memperoleh Nilai Rata Rata " << rata2 << "Dari Hasil Perlombaan Yang Diikutinya" << endl;

	switch (rata2/10){
		case 10:
		case 9:
		case 8:
			cout << "Hadiah Yang Didapat Adalah Komputer Core i5" << endl;
			break;
			
		case 7:
			cout << "Hadiah Yang Didapat Adalah Uang Sebesar Rp. 2.500.000" << endl;
			break;
		
		default:
			cout << "Hadiah Yang Didapat Adalah Hadiah Hiburan" << endl;
			break;
			
			return 0;
	}
}
	
