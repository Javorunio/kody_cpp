#include <iostream>

using namespace std;
int main()
{
    int liczb1, liczb2, schowek;
    cout << "Podaj liczbe 1: "; cin >> liczb1;
    cout << "Podaj liczbe 2: "; cin >> liczb2;
    
    do
    {
    schowek = liczb2;
    liczb2 = liczb1%liczb2;
    liczb1 = schowek;
    }
    while(liczb2!=0);

    cout << "Najwiekszy wspolny dzielnik podanych liczb wynosi: " << schowek << endl;
    system("pause");
    return 0;
}