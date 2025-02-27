#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int *pArr = arr;
    int max;
    int min;

    for (int i = 0; i < 10; i++) {
        cout << "Masukan angka ke-" << i + 1 << ": ";
        cin >> *(pArr + i);
    }

    cout << endl;
    max = arr[0];
    for (int i = 0; i < 10; i++) {
        if (max < *(pArr + i)) {max = *(pArr + i);};
    }
    cout << "Nilai terbesar: " << max << endl;

    min = arr[0];
    for (int i = 0; i < 10; i++) {
        if (min > *(pArr + i)) {min = *(pArr + i);};
    }
    cout << "Nilai terkecil: " << min << endl;


    return 0;
}