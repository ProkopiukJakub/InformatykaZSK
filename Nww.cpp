#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;

    int iloczyn = a * b;
    while (a != b)
    {
        if (a < b)
        {
            b = b - a;
        }
        else
        {
            a = a - b;
        }


    }
    int nww = iloczyn / a;
    cout << "Najmniejsza wspolna wielokrotnosc: " << nww;
}