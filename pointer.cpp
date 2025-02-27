#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *px = &x;

    cout << "Nilai x: " << x << " -- Bertipe data " << typeid(x).name() << endl;
    cout << "Alamat x: " << &x << " -- Bertipe data " << typeid(&x).name() << endl;
    cout << "Nilai px (alamat x): " << px << " -- Bertipe data " << typeid(px).name() << endl;
    cout << "Nilai yang ditunjuk oleh px (nilai x): " << *px << " -- Bertipe data " << typeid(*px).name() << endl;
}