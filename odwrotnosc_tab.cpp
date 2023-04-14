#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h> //opcjonalne
using namespace std;
int main()
{
     int ile;
    cout << "Ile miejsc ma miec tablica? "; cin >> ile;

    int tablica[ile];
    srand(time(NULL));


    cout << "Tablica przed odwroceniem:" << endl;
    for(int i = 0; i < ile; i++)
    {
        Sleep(25); //gdy nie uzywasz windows.h to tego tez nie wstawiaj
        tablica[i] = rand()%10; // od 0 do 9
        cout << tablica[i] << ", "; // wyswietlenie
    }
    cout << endl;

    int schowek1, schowek2;

    for(int i = 0, j = ile-1; i <= j; i++, j-=1) //petla do zamiany miejsc
    //trzeba tutaj zadeklarowac dwie zmienne i j = ile-1, bo tablice dzialaja tak samo ze jak podasz np 10 to jest od 0 do 9, a nie od 1 do 10 w skrocie
    {
        schowek1 = tablica[i];
        schowek2 = tablica[j];
        //cout << schowek1 << ", " <<  schowek2 << ", ";

        tablica[i] = schowek2;
        tablica[j] = schowek1;
    }
   
    cout << "Tablica po odwroceniu:" << endl;
    for(int i = 0; i < ile; i++)
    {
        cout << tablica[i] << ", "; // wyswietlenie
    }
    cout << endl;

    system("pause");
    return 0;
}