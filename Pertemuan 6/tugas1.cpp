#include <iostream>
#include <conio.h>   

using namespace std;

int main() {
    int a, b;
    char lagi;

    do {
        system("cls"); 
        cout << "Masukkan Bilangan = ";
        cin >> a;

        b = a % 2;
        if (b == 0)
            cout << "Bilangan Genap" << endl;
        else
            cout << "Bilangan Ganjil" << endl;

        cout << "\nIngin mengulang lagi? (Y/T): ";
        cin >> lagi;
    } while (lagi == 'Y' || lagi == 'y');

    cout << "\nProgram selesai. Terima kasih!" << endl;
    getch();
    return 0;
}
