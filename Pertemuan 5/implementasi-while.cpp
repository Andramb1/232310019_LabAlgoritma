#include<iostream>
using namespace std;

int main ()
{
	int a,bil=1;
	
	cout << "Masukan Blangan Pembatas Akhir = ";
	cin >>a;
	
	while(bil<=a) {
		cout << bil << " ";
		bil++;
	}
	
	getchar();
}
