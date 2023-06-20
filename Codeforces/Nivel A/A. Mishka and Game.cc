#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int rondas, Mishka, Chris, resultadoMishka = 0, resultadoChris = 0;
    cin >> rondas;
    for (int i = 0; i < rondas; i++)
    {
        cin >> Mishka >> Chris;
        if (Mishka > Chris)
        {
            resultadoMishka++;
        }
        else if (Chris > Mishka)
        {
            resultadoChris++;
        }
    }
    if (resultadoMishka > resultadoChris)
    {
        cout << "Mishka" << '\n';
    }
    else if (resultadoChris > resultadoMishka)
    {
        cout << "Chris" << '\n';
    }
    else
    {
        cout << "Friendship is magic!^^" << '\n';
    }
}
