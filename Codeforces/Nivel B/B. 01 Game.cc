#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, res;
    string cadena;
    cin >> casos;
    for (int c = 0; c < casos; c++)
    {
        res = 0;
        cin >> cadena;
        for (int i = 0; i < cadena.size(); i++)
        {
            if (cadena[i] == '1')
            {
                res++;
            }
        }
        int aux = cadena.size() - res;
        res = min(res, aux);

        if (res % 2 == 1)
        {
            cout << "DA" << '\n';
        }
        else
        {
            cout << "NET" << '\n';
        }
    }
}