#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int cantContest, primerContest, contador = 0, contest, mayor, menor;
    cin >> cantContest >> primerContest;
    mayor = primerContest;
    menor = primerContest;
    for (int i = 0; i < cantContest - 1; i++)
    {
        cin >> contest;
        if (contest > mayor)
        {
            contador++;
            mayor = contest;
        }
        if (contest < menor)
        {
            contador++;
            menor = contest;
        }
    }
    cout << contador << '\n';
}