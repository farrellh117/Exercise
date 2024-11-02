#include <iostream>
using namespace std;

float hitungLuasSegitiga(float a, float t) {
    return 0.5 * a * t;
}

int main() {
    float alas, tinggi;

    cout << "Input alas segitiga: ";
    cin >> alas;
    cout << "Input tinggi segitiga: ";
    cin >> tinggi;

    cout << "Luas segitiga: " << hitungLuasSegitiga(alas, tinggi) << " cm\n";

    return 0;
}