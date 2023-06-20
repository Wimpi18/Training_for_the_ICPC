#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int cantImanes, resultado = 1, posIman;
    cin >> cantImanes;
    int fila[cantImanes];
    for (int i = 0; i < cantImanes; i++)
    {
        cin >> posIman;
        fila[i] = posIman;
        if (i > 0)
        {
            if (fila[i] != fila[i - 1])
            {
                resultado++;
            }
        }
    }
    cout << resultado << '\n';
}