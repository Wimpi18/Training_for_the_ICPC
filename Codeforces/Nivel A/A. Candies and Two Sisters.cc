#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, caramelos, resultado;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        cin >> caramelos;
        if (caramelos == 1)
        {
            resultado = 0;
        }
        else if (caramelos % 2 == 0)
        {
            resultado = (caramelos / 2) - 1;
        }
        else
        {
            resultado = caramelos / 2;
        }
        cout << resultado << '\n';
    }
}