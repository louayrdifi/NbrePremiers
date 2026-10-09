#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    const int n_col = 5;
    int limite;
    char recommecer;

    do
    {
        cout << "Entrer une valeur entre [2-1000] : ";
        cin >> limite;

        while (limite < 2 || limite > 1000)
        {
            cout << "Valeur incorrecte !" << endl;
            cout << "Entrer une valeur entre [2-1000] : ";
            cin >> limite;
        }

        cout << endl;
        int i = 0;

        for (int nombre = 2; nombre <= limite; nombre++)
        {
            bool premier = true;

            for (int diviseur = 2; diviseur < nombre; diviseur++)
            {
                if (nombre % diviseur == 0)
                {
                    premier = false;
                }
            }

            if (premier == true)
            {
                cout << setw(6) << nombre;

                i++;

                if (i == n_col)
                {
                    cout << endl;
                    i = 0;
                }
            }
        }

        cout << endl;
        cout << endl;

        cout << "Voulez vous recommencer O/N : ";
        cin >> recommecer;

        while (recommecer != 'O' && recommecer != 'N')
        {
            cout << "Reponse incorrecte !" << endl;
            cout << "Voulez vous recommencer O/N : ";
            cin >> recommecer;
        }

        cout << endl;

    } while (recommecer == 'O');

    return 0;
}