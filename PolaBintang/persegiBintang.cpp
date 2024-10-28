#include <iostream>
using namespace std;

int main() {
    int input;

    cout << "Input besar persegi: ";
    cin >> input;

    for (int baris = 0; baris < input; baris++) {
        for (int kolom = 0; kolom < input; kolom++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}