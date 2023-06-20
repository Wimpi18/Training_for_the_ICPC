#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, k = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        string salida = "";
        if (i % 2 == 0)
        {
            k++;
            for (int j = 0; j < m; j++)
            {
                salida += ".";
            }
            if (k % 2 == 0)
            {
                salida[0] = '#';
            }
            else
            {
                salida[m - 1] = '#';
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                salida += "#";
            }
        }
        cout << salida << '\n';
    }
}