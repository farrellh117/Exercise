#include <iostream>
using namespace std;

float hitungLuasPersegiPanjang (float p, float l) {
    return p * l;
}

int main() {
    float panjang, lebar;

    cout << "Input panjang persegi panjang: ";
    cin >> panjang;
    cout << "Input lebar persegi panjang: ";
    cin >> lebar;

    cout << "Luas persegi panjang: " << hitungLuasPersegiPanjang(panjang, lebar) << " cm\n";

    return 0;
}