#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, n, a, b, c, d, res;
    cin >> casos;
    for (int ca = 0; ca < casos; ca++)
    {
        bool esPosible = false;
        cin >> n >> a >> b >> c >> d;
        int intervalo1 = c - d, intervalo2 = c + d;
        int res1 = n * a;
        int res2 = n * (a + b);
        int res3 = n * (a - b);
        if (res1 >= intervalo1 && res1 <= intervalo2)
        {
            esPosible = true;
        }
        else if (res2 >= intervalo1 && res2 <= intervalo2)
        {
            esPosible = true;
        }
        else if (res3 >= intervalo1 && res3 <= intervalo2)
        {
            esPosible = true;
        }
        else if (res2 >= intervalo1 && res3 <= intervalo2)
        {
            esPosible = true;
        }

        if (esPosible)
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
    }
}