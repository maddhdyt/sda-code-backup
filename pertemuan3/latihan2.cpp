#include <iostream>
#include <cstring>

using namespace std;


void balik(char* str) {
    int len = strlen(str);
    char *awal = str;
    char *akhir = str + len - 1;

    while (awal < akhir) {
        char temp = *awal;
        *awal = *akhir;
        *akhir = temp;
        awal++;
        akhir--;
    }
}

int main() {
    char word[100];

    cout << "Masukan kata: "; 
    cin >> word;

    int length = strlen(word);

    balik(word);

    cout << "Jumlah karakter: " << length << endl;
    cout << "Kata setelah dibalik: " << word << endl;

    return 0;
}