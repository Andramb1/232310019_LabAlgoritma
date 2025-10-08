#include <iostream>
#include <cmath>
using namespace std;

// Fungsi volume tabung dengan parameter bertipe float
float volumetabung(float pi, float r, float t) {
    float r2 = pow(r, 2); // bisa juga r*r
    return pi * r2 * t;
}

int main() {
    float pi = 3.14;
    float r, t;

    cout << "V = pi x r² x t" << endl;

    cout << "Masukan Jari-Jari = ";
    cin >> r;

    cout << "Masukan Tinggi = ";
    cin >> t;

    float hasil = volumetabung(pi, r, t); 

    cout << "V = " << pi << " * " << r << "^2 * " << t << endl;
    cout << "Hasil Volume Tabung Adalah = " << hasil << endl; 

    return 0;
}

