#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h> //to jest opcjonalne
using namespace std;
int main()
{
    int ile;
    cout << "Ile miejsc ma miec tablica? "; cin >> ile;

    int tablica[ile];
    srand(time(NULL));

    for(int i = 0; i < ile; i++)
    {
        Sleep(25); //gdy nie uzywasz windows.h to tego tez nie wstawiaj
        tablica[i] = rand()%10; // od 0 do 9
        cout << tablica[i] << ", "; // wyswietlenie
    }
    cout << endl;

    int szukana, ile_jest = 0;
    cout << "Jaka liczbe w tablicy program ma policzyc? " ; cin >> szukana;

    for(int i = 0; i < ile; i++)
    {
        if(tablica[i] == szukana) // musi byc == a nie = bo == sprawdza a nie ustala wartość (tak jak !=)
        {
            ile_jest++; //mozna tez napisac: ile_jest+=1 lub ile_jest = ile_jest + 1
        }
    }

    cout << "\n Liczba " << szukana << " wystepuje " << ile_jest << " razy." << endl;
    system("pause");
    return 0;
}