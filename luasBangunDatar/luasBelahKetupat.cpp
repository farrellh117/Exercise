#include <iostream>
using namespace std;

float hitungLuasBelahKetupat (float d1, float d2) {
    return 0.5 * d1 * d2;
}

int main() {
    float diagonal1, diagonal2;

    cout << "Input panjang diagonal 1: ";
    cin >> diagonal1;
    cout << "Input panjang diagonal 2: ";
    cin >> diagonal2;

    cout << "Luas belah ketupat: " << hitungLuasBelahKetupat(diagonal1, diagonal2) << " cm\n";

    return 0;
}