#include <iostream>
using namespace std;

int main() {
    int lebar_ketupat;

    cout << "Input lebar belah ketupat: ";
    cin >> lebar_ketupat;

    for (int baris = 0; baris < (lebar_ketupat * 2) - 1; baris++) {
        for (int spasi_atas = 0; spasi_atas < lebar_ketupat - baris; spasi_atas++) {
            cout << " ";
        }

        for (int kolom_atas = 0; kolom <= baris; kolom_atas++) {
            cout << "* ";
        }

        for (int spasi_bawah = spasi_atas; spasi_bawah < lebar_ketupat - baris; spasi_bawah++) {
            cout << " ";
        }

        for (int kolom_bawah = kolom_atas; kolom_bawah > 0; kolom_bawah--) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}