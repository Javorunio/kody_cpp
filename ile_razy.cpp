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

    for(int i = 0; i < ile; i++)
    {
        Sleep(25);
        tablica[i] = rand()%10;
        cout << tablica[i] << ", ";
    }
    cout << endl;

    int szukana, ile_jest = 0;
    cout << "Jaka liczbe w tablicy program ma policzyc? " ; cin >> szukana;

    for(int i = 0; i < ile; i++)
    {
        if(tablica[i] == szukana)
        {
            ile_jest++;
        }
    }

    cout << "\n Liczba " << szukana << " wystepuje " << ile_jest << " razy." << endl;
    system("pause");
    return 0;
}