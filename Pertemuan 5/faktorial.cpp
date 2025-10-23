#include <iostream>
using namespace std;

int main() {
    int n;          
    char ulangi;   

		cout << "Program Faktorial" << endl;
    do {
        cout << "Masukkan bilangan: ";
        cin >> n;

        int i = 1;
        long long faktorial = 1;
        
        while (i <= n) {
            faktorial *= i;
            i++;
        }

        cout << "Hasil " << n << "! = " << faktorial << endl;

        cout << "Ulangi lagi? (y/n): ";
        cin >> ulangi;

    } while (ulangi == 'y' || ulangi == 'Y');  

    return 0;
}

