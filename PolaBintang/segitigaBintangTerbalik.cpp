#include <iostream>
using namespace std;

int main() {
    int tinggi;

    cout << "Input tinggi segitiga: ";
    cin >> tinggi;

    for (int baris = tinggi; baris >= 0; baris--) {
        for (int kolom = baris; kolom > 0; kolom--) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}