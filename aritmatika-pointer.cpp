#include <iostream>
using namespace std;


int main() {
    char lokasi[] = "Cibiru";
    char *Plokasi = lokasi;

    cout << "Value         : " << lokasi << endl;
    cout << "Array[0]      : " << lokasi[0] << endl;
    cout << "Nilai Plokasi : " << *Plokasi << endl;
    cout << "Pointer[2]    : " << Plokasi[2] << endl;
    Plokasi += 3;
    cout << "Pointer[2+3]  : " << Plokasi[2] << endl;
    cout << "Pointer[2+3]  : " << Plokasi << endl;

    return 0;
}