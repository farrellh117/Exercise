#include <iostream>
using namespace std;

int main() {
    int tinggi_segitiga, pola_angka = 0;

    cout << "Input tinggi segitiga: ";
    cin >> tinggi_segitiga;

    for (int baris = 1; baris <= tinggi_segitiga; baris++) {
	    for (int kolom = 0; kolom <= tinggi_segitiga - baris; kolom++) {
	        ++pola_angka;
	        cout << pola_angka << " ";
	    }
	    cout << endl;
    }

    return 0;
}
