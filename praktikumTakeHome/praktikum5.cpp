// Praktikum 5
// Nama: Ahmad Hidayat
// NIM: 2410482

#include <iostream>
using namespace std;

int main() {
    int arr[2][3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Masukan nilai array [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "\nNilai array 2 x 3 adalah:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
