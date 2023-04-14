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

    cout << "Pierwsza tablica: " << endl;
    for(int i = 0; i < ile; i++)
    {
        Sleep(25); //gdy nie uzywasz windows.h to tego tez nie wstawiaj
        tablica[i] = rand()%10; // od 0 do 9
        cout << tablica[i] << ", "; // wyswietlenie
    }
    cout << endl;

    cout << "Przepisana tablica: " << endl;
    int tablica2[ile];
    for(int i = 0; i < ile; i++)
    {
        tablica2[i] = tablica[i];
        cout << tablica2[i] << ", "; // wyswietlenie
    }
    cout << endl;

    int komorka;

    dzialanie: //punkt
    cout << "Wybierz komorke do dzialania w obu tablicach (zakres od 1 do podanej liczby): "; cin >> komorka;
    komorka -= 1;
    if(komorka > ile-1 || komorka < 0) //dwuznak || oznacza "or", czyli jedno z tych musi byc prawdziwe zeby sie wykonalo
    //zrobilem tego ifa, zeby program byl jako tako debiloodporny, czyli wywali blad jak napiszesz literke, ale jak napiszesz zla cyferke to dopoki nie poprawisz to nie leci dalej
    {
        cout << "Blad! Wartosc zbyt duza lub za mala. ";
        goto dzialanie; //idz do punktu dzialanie
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