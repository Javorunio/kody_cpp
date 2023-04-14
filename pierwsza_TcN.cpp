#include <iostream>
using namespace std;
int main()
{
    int liczba, kontrola;
    cout << "Program sprawdza czy dana liczba jest parzysta" << endl << "Podaj liczbe do sprawdzenia: "; cin >> liczba;
    cout << "Czy chcesz widziec reszte z kazdego dzielenia? (jesli tak to napisz '1') "; cin >> kontrola; //ta cala linijka jest opcjonalna

    int dzielnik = 2, wynik_dziel, ile_dzielnik = 0, odp;

    do
    {
        wynik_dziel = liczba % dzielnik;

        if(kontrola == 1)
        cout << wynik_dziel << ", ";

        if(wynik_dziel == 0)
        ile_dzielnik++;

        if(ile_dzielnik == 1)
        {
            odp = 1;
        }

        else if(ile_dzielnik >= 1)
        {
            odp = 0;
        }

        dzielnik++;
    }
    while(dzielnik <= liczba);
    cout << endl;

    if(odp == 1)
    {
    cout << liczba << " jest liczba pierwsza" << endl;
    }
    if(odp == 0)
    {
    cout << liczba << " nie jest liczba pierwsza" << endl;
    }

    system("pause");
    return 0;
    
}