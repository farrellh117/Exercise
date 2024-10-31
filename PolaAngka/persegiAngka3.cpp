#include <iostream>
using namespace std;

int main() {
    int besar_persegi, pola_angka = 0;

    cout << "Input besar persegi: ";
    cin >> besar_persegi;

    for (int baris = 1; baris <= besar_persegi; baris++) {
        for (int kolom = 1; kolom <= besar_persegi; kolom++) {
            ++pola_angka;
            cout << pola_angka << " ";
        }
        cout << endl;
    }

    return 0;
}