#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int cantidad, respuesta = 0;
    string patron;
    cin >> cantidad >> patron;
    for (int i = 0; i < patron.length() - 1; i++)
    {
        if (patron[i] == patron[i + 1])
        {
            respuesta++;
        }
    }
    cout << respuesta << '\n';
}