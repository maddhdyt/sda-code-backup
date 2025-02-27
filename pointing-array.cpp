#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int *pArr = arr;

    cout << "Nilai array menggunakan pointer: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(pArr + i) << " ";
    }
    return 0;
}