#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
using namespace std;
int main()
{
    int ile;
    cout << "Ile miejsc ma miec tablica? "; cin >> ile;

    int tablica[ile];
    srand(time(NULL));

    cout << "Pierwsza tablica: " << endl;
    for(int i = 0; i < ile; i++)
    {
        Sleep(25);
        tablica[i] = rand()%10;
        cout << tablica[i] << ", ";
    }
    cout << endl;

    cout << "Przepisana tablica: " << endl;
    int tablica2[ile];
    for(int i = 0; i < ile; i++)
    {
        tablica2[i] = tablica[i];
        cout << tablica2[i] << ", ";
    }
    cout << endl;

    int komorka;

    dzialanie: //punkt
    cout << "Wybierz komorke do dzialania w obu tablicach (zakres od 1 do podanej liczby): "; cin >> komorka;
    komorka -= 1;
    if(komorka > ile-1 || komorka < 0)
    {
        cout << "Blad! Wartosc zbyt duza lub za mala. ";
        goto dzialanie;
    }

    int skladnik;
    cout << "Ile dodac do danej komorki w obu tablicach? "; cin >> skladnik;
    tablica[komorka] += skladnik;
    tablica2[komorka] += skladnik;

    cout << "Tablica 1:" << endl;
    for(int i = 0; i < ile; i++)
    {
        cout << tablica[i] << ", ";
    }
    cout << endl << "Tablica 2:" << endl;
    for(int i = 0; i < ile; i++)
    {
        cout << tablica2[i] << ", ";
    }
    cout << endl;

    system("pause");
    return 0;
}