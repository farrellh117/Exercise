#include <iostream>
using namespace std;

float hitungLuasLingkaran(float r) {
    return 3.14 * r * r;
}

int main() {
    float jari_jari;

    cout << "Input jari-jari lingkaran: ";
    cin >> jari_jari;

    cout << "Luas lingkaran: " << hitungLuasLingkaran(jari_jari) << " cm\n";

    return 0;
}