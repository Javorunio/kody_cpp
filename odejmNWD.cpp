#include <iostream>

using namespace std;
int main()
{
    int liczb1, liczb2;
    cout << "Podaj liczbe 1: ";
    cin >> liczb1;
    cout << "Podaj liczbe 2: ";
    cin >> liczb2;

    do
    {
        if(liczb1 > liczb2)
        {
            liczb1 = liczb1 - liczb2;
        }
        else if(liczb2 > liczb1)
        {
            liczb2 = liczb2 - liczb1;
        }
    }
    while(liczb1!=liczb2);

    cout << "Najwiekszy wspólny dzielnik wynosi: " << liczb1 << endl;
    system("pause");
    return 0;
}