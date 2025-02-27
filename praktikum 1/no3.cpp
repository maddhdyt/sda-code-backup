#include <iostream>
using namespace std;

int main() {
    float luas;
    int t, a;

    cout << "Hitung luas segitiga" << endl;
    cout << "Masukkan alas: ";
    cin >> a;

    cout << "Masukkan tinggi: ";
    cin >> t;

    luas = 0.5 * a * t;
    cout << "Luas segitiga adalah " << luas << "cm2" << endl;
    
    return 0;
}