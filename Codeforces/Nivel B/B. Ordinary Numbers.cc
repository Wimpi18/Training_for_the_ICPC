#include <iostream>
#include <math.h>
using namespace std;
int cantidadDigitos(int);
int numPatron(int);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos;
    cin >> casos;
    for (int c = 0; c < casos; c++)
    {
        int n;
        cin >> n;
        int res = 0;
        int cd = cantidadDigitos(n);
        if (n < 10)
        {
            res = n;
        }
        else
        {
            res = (cd - 1) * 9;
            int nPatron = numPatron(cd);
            if (n % nPatron != 0)
            {
                res += (n / pow(10, cd - 1));
                if (n < ((int)n / (int)pow(10, cd - 1)) * nPatron)
                {
                    res -= 1;
                }
            }
            else
            {
                res += n / pow(10, cd - 1);
            }
        }
        cout << res << '\n';
    }
}
int cantidadDigitos(int n)
{
    if (n / 10 == 0)
    {
        return 1;
    }
    else
    {
        return cantidadDigitos(n / 10) + 1;
    }
}
int numPatron(int cd)
{
    if (cd == 1)
    {
        return 1;
    }
    else
    {
        return pow(10, cd - 1) + numPatron(cd - 1);
    }
}