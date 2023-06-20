#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, n;
    cin >> casos;
    bool esPosible;
    int control, mov;
    for (int c = 0; c < casos; c++)
    {
        cin >> n;
        control = 0, mov = 0;
        esPosible = true;
        while (esPosible && n != 1)
        {
            if (control >= 2)
            {
                esPosible = false;
            }
            else if (n % 6 == 0)
            {
                n = n / 6;
                control = 0;
                mov++;
            }
            else
            {
                n = n * 2;
                control++;
                mov++;
            }
        }
        if (esPosible)
        {
            cout << mov << '\n';
        }
        else
        {
            cout << "-1" << '\n';
        }
    }
}