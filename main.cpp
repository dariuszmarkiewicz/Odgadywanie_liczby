#include <iostream>
#include<cstring>
#include <cstdlib>

using namespace std;


int main()
{
    int x, y=0;
    char powt;
    x=(rand()%99)+1;

    cout << x << "   " << y << endl;

    while (x!=y)
        {
            cout << "Zgadnij wylosowana liczbe od 1 do 100: ";
            cin >> y;

            if (x==y)
                cout << "\n Brawo, to wylosowana liczba" << endl;
            else
                if (x < y )
                    cout << "\n Wylosowana liczba jest mniejsza \n\n";
                else
                    cout << "\n Wylosowana liczba jest wieksza \n\n";
        }

    cout << "\n Jeszcze raz [t/n]: ";
    cin >> powt;

    if (powt=='t')
        main();


    return 0;
}
