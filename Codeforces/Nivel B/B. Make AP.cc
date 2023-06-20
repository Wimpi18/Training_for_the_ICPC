#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos;
    bool esPosible;
    cin >> casos;
    for (int ca = 0; ca < casos; ca++)
    {

        int a, b, c;
        cin >> a >> b >> c;
        esPosible = false;
        if ((a + c) % b == 0)
        {
            // cout << "entro en 1" << endl;
            esPosible = true;
        }
        else if ((a < b && c < b) && (((2 * b - a) % c == 0) || ((2 * b - c) % a == 0)))
        {
            // cout << "entro en 2" << endl;
            esPosible = true;
        }
        else if ((a == b && b % c == 0) || (c == b && b % a == 0))
        {
            // cout << "entro en 3" << endl;
            esPosible = true;
        }

        if (esPosible)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}