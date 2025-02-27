#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Masukan angka: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << "Adalah bilangan genap." << endl;
    } else {
        cout << num << "Ada bilangan ganjil" << endl;
    };
    return 0;
}