#include <iostream>
using namespace std;

int main() {
    int besar_persegi;

    cout << "Input besar persegi: ";
    cin >> besar_persegi;

    for (int baris = 1; baris <= besar_persegi; baris++) {
        for (int kolom = 1; kolom <= besar_persegi; kolom++) {
            cout << kolom << " ";
        }
        cout << endl;
    }

    return 0;
}