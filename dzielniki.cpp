#include <iostream>
using namespace std;
int main()
{
    int liczba;
    cout << "Wprowadz liczbe: "; cin >> liczba;

    cout << "Dzielniki tej liczby to 1, ";

    for(int i = 2; i <= liczba/2; i++) //i <= liczba podzielona przez 2, poniewaz jak podzielisz liczbe przez 1 to wyjdzie ci liczba,
    // a jak przez 2 to jej polowa, zatem np dla 10, nie bedzie wiekszego dzielnika niz 5 oprocz samej liczby 10, poniewaz 5*2 = 10
    {
        if(liczba % i == 0)
        cout << i << ", ";
    }

    cout << liczba << "." << endl;
    system("pause");
    return 0;
}