#include <iostream>
using namespace std;

int main()
{
    string buah[5] = {"apel", "jeruk", "mangga", "pisang", "semangka"};

    for (int i = 0; i < 5; i++)
    {
        cout <<"Array index ke- " << i << ", " << buah[i] << endl;
    }
}