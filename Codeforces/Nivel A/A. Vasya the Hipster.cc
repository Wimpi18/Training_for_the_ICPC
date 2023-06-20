#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool terminar = false;
    int calcetinesRojos, calcetinesAzules, contadorModa = 0, contadorNormal = 0;
    cin >> calcetinesRojos >> calcetinesAzules;
    while (!terminar)
    {
        if (calcetinesRojos - 2 >= 0 || calcetinesAzules - 2 >= 0 || (calcetinesRojos - 1 >= 0 && calcetinesAzules - 1 >= 0))
        {
            if (calcetinesRojos - 1 >= 0 && calcetinesAzules - 1 >= 0)
            {
                calcetinesRojos--;
                calcetinesAzules--;
                contadorModa++;
            }
            else
            {
                if (calcetinesRojos - 2 >= 0)
                {
                    calcetinesRojos -= 2;
                    contadorNormal++;
                }
                if (calcetinesAzules - 2 >= 0)
                {
                    calcetinesAzules -= 2;
                    contadorNormal++;
                }
            }
        }
        else
        {
            terminar = true;
        }
    }
    cout << contadorModa << '\n';
    cout << contadorNormal << '\n';
}