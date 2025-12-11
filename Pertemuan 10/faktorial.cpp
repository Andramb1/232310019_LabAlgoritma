#include<iostream>
using namespace std;

int faktorial (int n) {
        int hasil =1;
        for(int i = 1; i <= n; i++) {
        hasil *=i;
        }
        return hasil;
}
    
    int main () {
        int angka;
        
        cout << "Masukan Angka : ";
        cin >> angka;
        
        int hasilFaktorial = faktorial(angka);
        
        cout << "Faktorial Dari " << angka << " Adalah : " << hasilFaktorial << endl;
        
        return 0;    
    }
