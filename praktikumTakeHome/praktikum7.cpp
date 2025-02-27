// Praktikum 7
// Nama: Ahmad Hidayat
// NIM: 2410482

#include <iostream>
using namespace std;

int main() {
    int arr[2][3];
    int maxArr; 

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Masukkan nilai array [" << i << "][" << j << "]: ";
            cin >> arr[i][j];

            if (i == 0 && j == 0) {
                maxArr = arr[i][j];
            }

            if (arr[i][j] > maxArr) {
                maxArr = arr[i][j];
            }
        }
    }

    cout << "\nNilai array 2 x 3 adalah:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nNilai maksimalnya adalah: " << maxArr << endl;

    return 0;
}
