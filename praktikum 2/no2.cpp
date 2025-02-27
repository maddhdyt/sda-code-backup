// Praktikum 2 No 2
// Nama: Ahmad Hidayat
// NIM: 2410482

#include <iostream>
using namespace std;

int main() {
    int n;
    string huruf[12] = {"a", "h", "m", "a", "d", "h", "i", "d", "a", "y", "a", "t"};
    cout << "Masukan igin huruf ke-: ";
    cin >> n;

    cout << huruf[n-1] << endl;

    return 0;
}