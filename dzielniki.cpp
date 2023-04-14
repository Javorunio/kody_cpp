#include <iostream>
using namespace std;
int main()
{
    int liczba;
    cout << "Wprowadz liczbe: "; cin >> liczba;

    cout << "Dzielniki tej liczby to 1, ";

    for(int i = 2; i <= liczba/2; i++)
    {
        if(liczba % i == 0)
        cout << i << ", ";
    }

    cout << liczba << "." << endl;
    system("pause");
    return 0;
}