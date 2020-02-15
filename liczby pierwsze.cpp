//SPOJ submission 22979814 (CPP)plaintext list.Status: AC, problem PRIME_T, contest SPOJPL.By ravruc(ravruc), 2019 - 01 - 02 13 : 42 : 54.
#include <iostream>

using namespace std;

long int prob, a;\


int main()
{

    cin >> prob;
    for (int i = 1; i <= prob; i++)
    {
        cin >> a;
        if (a < 2)
            cout << "NIE" << endl;
        else
        {
            if (a % 2 == 0 && a > 2) cout << "NIE" << endl;
            else
            {
                for (int j = 2; j <= a / 2; j++)
                {
                    if (a % j == 0)
                    {
                        cout << "NIE" << endl; break;
                    }

                    if (a % j != 0 && j == a / 2)    cout << "TAK" << endl;
                }

            }
            if (a == 2 || a == 3) cout << "TAK" << endl;
        }
    }
    return 0;
}
