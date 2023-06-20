#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool a = false;
    bool e = false;
    bool i = false;
    bool o = false;
    bool u = false;

    char caracter;
    int length;
    string oracion;
    cin >> length >> oracion;

    for (int i = 0; i < length; i++)
    {
        if (oracion[i] == 'a' || oracion[i] == 'A')
        {
            a = true;
        }
        if (oracion[i] == 'e' || oracion[i] == 'E')
        {
            e = true;
        }
        if (oracion[i] == 'i' || oracion[i] == 'I')
        {
            i = true;
        }
        if (oracion[i] == 'o' || oracion[i] == 'O')
        {
            o = true;
        }
        if (oracion[i] == 'u' || oracion[i] == 'U')
        {
            u = true;
        }
    }
    if (a && e && i && o && u)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}