#include <iostream>
using namespace std;

int main() {
    int x = 25;
    int *px = &x;

    cout << "Nilai x: " << x << endl;
    cout << "Alamat x: " << &x << endl;
    cout << "Nilai yang diakses melalui pointer: " << *px << endl;
}