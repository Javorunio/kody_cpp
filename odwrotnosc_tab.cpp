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


    cout << "Tablica przed odwroceniem:" << endl;
    for(int i = 0; i < ile; i++)
    {
        Sleep(25);
        tablica[i] = rand()%10;
        cout << tablica[i] << ", ";
    }
    cout << endl;

    int schowek1, schowek2;

    for(int i = 0, j = ile-1; i <= j; i++, j-=1)
    {
        schowek1 = tablica[i];
        schowek2 = tablica[j];

        tablica[i] = schowek2;
        tablica[j] = schowek1;
    }
   
    cout << "Tablica po odwroceniu:" << endl;
    for(int i = 0; i < ile; i++)
    {
        cout << tablica[i] << ", ";
    }
    cout << endl;

    system("pause");
    return 0;
}