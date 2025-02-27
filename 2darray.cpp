#include <iostream>
using namespace std;

int main(){
    int arr[2][2];

    arr[0][0] = 20;
    arr[0][1] = 15;
    arr[1][0] = 17;
    arr[1][1] = 33;

    cout << "Elemen dari arr adalah: " << endl;
    cout << arr[0][0] << " " << arr[0][1] << endl;
    cout << arr[1][0] << " " << arr[1][1] << endl;

    return 0;
}