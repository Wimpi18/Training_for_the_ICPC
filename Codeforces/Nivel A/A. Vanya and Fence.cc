#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int cant, alturaMax, alturaPersona, resultado = 0;
    cin >> cant >> alturaMax;
    for (int i = 0; i < cant; i++)
    {
        cin >> alturaPersona;
        if (alturaPersona > alturaMax)
        {
            resultado += 2;
        }
        else
        {
            resultado++;
        }
    }
    cout << resultado << '\n';
}