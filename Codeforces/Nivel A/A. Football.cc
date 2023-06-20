#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string juego;
    cin >> juego;
    int contador0 = 0, contador1 = 0; 
    for (int i = 0; i < juego.length() && contador0 < 7 && contador1 < 7; i++)
    {
        //cout << "compara el " << juego[j] << " con " << juego[i] << '\n';
        if (juego[i] == '0')
        {
            //cout << "distintos" << '\n';
            contador1 = 0;
            contador0++;
        }
        else
        {
            //cout << "iguales" << '\n';
            contador0 = 0;
            contador1++;
        }
    }
    if (contador0 >= 7 || contador1 >= 7)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}