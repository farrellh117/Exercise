#include <iostream>
using namespace std;

int main() {
    int tinggi_segitiga;

    cout << "Input tinggi segitiga: ";
    cin >> tinggi_segitiga;

    for (int baris = tinggi_segitiga; baris >= 0; baris--) {
        for (int spasi = 0; spasi < tinggi_segitiga - baris; spasi++) {
            cout << " ";
        }

        for (int kolom = baris; kolom > 0; kolom--) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}