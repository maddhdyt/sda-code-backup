#include <iostream>
using namespace std;

int main() {
    int *a, *b;
    int x = 5, y = 10;

    cout << "-------***-------" << endl;
    cout << "Sebelum di SWAP " << endl;
    cout << "Nilai x: " << x << endl;
    cout << "Nilai y: " << y << endl;
    cout << "Alamat x: " << &x << endl;
    cout << "Alamat y: " << &y << endl;
    cout << "\n";

    cout << "-------***-------" << endl;
    cout << "Sesudah di SWAP " << endl;
    swap(x, y);
    cout << "Nilai x: " << x << endl;
    cout << "Nilai y: " << y << endl;
    cout << "Alamat x: " << &x << endl;
    cout << "Alamat y: " << &y << endl;
    
    return 0;
}