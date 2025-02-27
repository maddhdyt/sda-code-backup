#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        int *p = &arr[i];
        size_t ptrValue = reinterpret_cast<size_t>(p);
        cout << "Array: ke-" << i << " = " << arr[i] << ptrValue << endl;
    }
}