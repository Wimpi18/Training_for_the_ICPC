#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string palabra;
    int mayusculas = 0, minusculas = 0;
    cin >> palabra;
    for (int i = 0; i < palabra.length(); i++)
    {
        if (palabra[i] >= 'a' && palabra[i] <= 'z')
        {
            minusculas++;
        }
        else
        {
            mayusculas++;
        }
    }
    if (mayusculas > minusculas)
    {
        for (int i = 0; i < palabra.length(); i++)
        {
            palabra[i] = toupper(palabra[i]);
        }
    }
    else
    {
        for (int i = 0; i < palabra.length(); i++)
        {
            palabra[i] = tolower(palabra[i]);
        }
    }
    cout << palabra << '\n';
}