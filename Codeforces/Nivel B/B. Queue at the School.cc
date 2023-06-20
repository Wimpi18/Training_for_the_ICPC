#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string fila;
    int cantidad, tiempo;
    cin >> cantidad >> tiempo >> fila;
    for (int i = 0; i < tiempo; i++)
    {
        for (int j = 0; j < cantidad - 1; j++)
        {
            if (fila[j] == 'B' && fila[j + 1] == 'G')
            {
                fila[j] = 'G';
                fila[j + 1] = 'B';
                j++;
            }
        }
    }
    cout << fila << '\n';
}