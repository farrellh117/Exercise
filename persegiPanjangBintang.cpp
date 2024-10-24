#include <iostream>
using namespace std;

int main() {
    int tinggi, lebar;

    cout << "Input tinggi persegi: ";
    cin >> tinggi;
    cout << "Input lebar persegi: ";
    cin >> lebar;

    for (int baris = 0; baris < tinggi; baris++) {
        for (int kolom = 0; kolom < lebar; kolom++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}