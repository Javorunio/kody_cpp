#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int main()
{
    int ll;
    cout << "Ile liczb mam wylosowac?" << endl; cin >> ll;

    int liczby[ll];
    srand(time(NULL));
    
    for(int a = 0; a < ll; a++)
    {
        liczby[a] = rand()%10;
        cout << a+1 << ". " << liczby[a] << endl;
    }

    int suma_liczb_np = 0, suma_wartosci_liczb_np = 0;

    for(int b = 0; b < ll; b++)
    {
        if(liczby[b]%2 == 1)
        {
            suma_liczb_np++;
            suma_wartosci_liczb_np += liczby[b];
        }
    }

    cout << "Liczb nieparzystych jest " << suma_liczb_np << " i ich zsumowana wartość wynosi " << suma_wartosci_liczb_np << endl;
    system("pause");
    return 0;
}