#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int x;
    int *p;

    cout << "--------Nilai 1--------" << endl;
    cout << "Nilai x: "; cin >> x;
    p = &x;
    cout << "--------Output 1--------" << endl;
    cout << "Nilai x: " << x << endl;
    cout << "Alamat x: " << p << endl;
    cout << "\n" << endl;

    cout << "--------Nilai 2--------" << endl;
    cout << "Nilai x: "; cin >> x;
    *p = x;
    cout << "--------Output 2--------" << endl;
    cout << "Nilai x: " << *p << endl;
    cout << "Alamat x: " << p << endl;
    
    return 0;
} 