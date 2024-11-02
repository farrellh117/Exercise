#include <iostream>
using namespace std;

float hitungLuasPersegi(float s) {
    return s * s;
}

int main() {
    float sisi;

    cout << "Input panjang sisi persegi: ";
    cin >> sisi;

    cout << "Luas persegi: " << hitungLuasPersegi(sisi) << " cm\n";

    return 0;
}