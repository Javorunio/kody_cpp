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
    cout << endl;
    system("pause");
    return 0;
}