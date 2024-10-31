#include <iostream>
using namespace std;

int main() {
    int tinggi_segitiga;

    cout << "Input tinggi segitiga: ";
    cin >> tinggi_segitiga;

    for (int baris = 1; baris <= tinggi_segitiga; baris++) {
	    for (int kolom = 1; kolom <= baris; kolom++) {
	        cout << baris << " ";
	    }
	    cout << endl;
    }
    
    return 0;
}
