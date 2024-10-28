#include <iostream>
using namespace std;

int main() {
    int lebar_ketupat;

    cout << "Input lebar belah ketupat: ";
    cin >> lebar_ketupat;

    // Bagian atas belah ketupat
    for (int baris = 0; baris < lebar_ketupat; baris++) {
        for (int spasi = 0; spasi < lebar_ketupat - baris; spasi++) {
            cout << " ";
        }

        for (int kolom = 0; kolom <= baris; kolom++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Bagian bawah belah ketupat
    for (int baris = lebar_ketupat - 2; baris >= 0; baris--) {
        for (int spasi = 0; spasi < lebar_ketupat - baris; spasi++) {
            cout << " ";
        }

        for (int kolom = baris; kolom >= 0; kolom--) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}