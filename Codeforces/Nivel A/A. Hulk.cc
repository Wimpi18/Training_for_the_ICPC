#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int capas;
    string resultado = "";
    cin >> capas;
    for (int i = 1; i <= capas; i++)
    {
        if (i % 2 == 0)
        {
            resultado = resultado + "I love";
        }
        else
        {
            resultado = resultado + "I hate";
        }
        if (capas != 1 && i != capas)
        {
            resultado = resultado + " that ";
        }
    }
    resultado = resultado + " it";
    cout << resultado << '\n';
}