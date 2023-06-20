#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string operacion;
    int cant_operaciones, x = 0;

    cin >> cant_operaciones;
    for (int i = 0; i < cant_operaciones; i++)
    {
        cin >> operacion;
        if (operacion == "++X" || operacion == "X++")
        {
            x++;
        }
        else if (operacion == "--X" || operacion == "X--")
        {
            x--;
        }
    }
    cout << x << "\n";
}