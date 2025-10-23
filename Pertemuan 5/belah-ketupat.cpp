#include <iostream>
using namespace std;

int main() {
    int a, i, j, k;

    cout << "Input lebar belah ketupat = ";
    cin >> a;
    cout << endl;
 
 
    for (i = 1; i <= a; i++) {
        for (j = i; j < a; j++) cout << " ";       
        for (k = 1; k <= (2 * i - 1); k++) cout << "*"; 
        cout << endl;
    }

    for (i = a - 1; i >= 1; i--) {
        for (j = a; j > i; j--) cout << " ";       
        for (k = 1; k <= (2 * i - 1); k++) cout << "*"; 
        cout << endl;
    }

    return 0;
}

