#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, a, b, resultado = 0;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        cin >> a >> b;
        if (a > b)
        {
            resultado = (a - b) / 10;
            if ((a - b) % 10 != 0)
            {
                resultado++;
            }
        }
        else
        {
            resultado = (b - a) / 10;
            if ((a - b) % 10 != 0)
            {
                resultado++;
            }
        }
        cout << resultado << '\n';
    }
}