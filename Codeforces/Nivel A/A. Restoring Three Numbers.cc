#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x, a, b, c;
    int arreglo[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> x;
        arreglo[i] = x;
    }

    int min;
    for (int i = 0; i < 4; i++)
    {
        min = i;
        for (int j = i + 1; j < 4; j++)
        {
            if (arreglo[j] < arreglo[min])
            {
                min = j;
            }
        }
        int aux = arreglo[i];
        arreglo[i] = arreglo[min];
        arreglo[min] = aux;
    }

    c = arreglo[3] - arreglo[0];
    b = arreglo[2] - c;
    a = arreglo[0] - b;
    cout << a << '\n';
    cout << b << '\n';
    cout << c << '\n';
}