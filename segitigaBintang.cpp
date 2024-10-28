#include <iostream>
using namespace std;

int main() {
    int tinggi;
    // int batas = 0;

    cout << "Input tinggi segitiga: ";
    cin >> tinggi;

    for (int baris = 0; baris < tinggi; baris++) {
        for (int kolom = 0; kolom <= baris; kolom++) { // Batas iterasi kolom disamakan dengan nilai variabel baris saat ini
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}