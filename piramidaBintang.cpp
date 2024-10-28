#include <iostream>
using namespace std;

int main() {
    int tinggi;

    cout << "Input tinggi segitiga: ";
    cin >> tinggi;

    for (int baris = 0; baris < tinggi; baris++) {
        for (int spasi = 0; spasi < tinggi - baris; spasi++) {
            cout << " ";
        }

        for (int kolom = 0; kolom <= baris; kolom++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}