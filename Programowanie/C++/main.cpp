#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int kolumny;
    int wiersze;

    cout << "Podaj ilosc wierszy: ";
    cin >> wiersze;
    cout << "Podaj ilosc kolumn: ";
    cin >> kolumny;

    for(int i = 1; i <= wiersze; i++)
    {
        for(int j = 1; j <= kolumny; j++)
        {
            cout << "X ";
        }
        cout << endl;
    }

    return 0;
}
