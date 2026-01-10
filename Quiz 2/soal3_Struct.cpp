#include <iostream>
using namespace std;

struct Pegawai {
    string nama;
    string jabatan;
    int gaji;
};

int main() {
    int n;
    cout << "Masukkan jumlah pegawai: ";
    cin >> n;
    cin.ignore(); 

    Pegawai pegawai[n];

    for (int i = 0; i < n; i++) {
        cout << "\nPegawai ke-" << i + 1 << endl;

        cout << "Nama    : ";
        getline(cin, pegawai[i].nama);

        cout << "Jabatan : ";
        getline(cin, pegawai[i].jabatan);

        cout << "Gaji    : ";
        cin >> pegawai[i].gaji;
        cin.ignore();
    }

    int UMR = 5000000;

    cout << "\n==================== DATA PEGAWAI ====================\n";
    cout << "Nama\t\tJabatan\t\tGaji\t\tKeterangan\n";

    for (int i = 0; i < n; i++) {
        cout << pegawai[i].nama << "\t\t"
             << pegawai[i].jabatan << "\t\t"
             << pegawai[i].gaji << "\t\t";

        if (pegawai[i].gaji < UMR)
            cout << "Di bawah UMR";
        else
            cout << "Di atas UMR";

        cout << endl;
    }

    return 0;
}

