#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, b, t, cociente, respuesta;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a % b == 0)
        {
            respuesta = 0;
        }
        else
        {
            cociente = a / b;
            cociente++;
            respuesta = (b * cociente) - a;
        }
        cout << respuesta << '\n';
    }
}