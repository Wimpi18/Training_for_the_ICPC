#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int nProblemas, Petya, Vasya, Tonya, contador = 0;
    cin >> nProblemas;
    for (int i = 0; i < nProblemas; i++)
    {
        cin >> Petya >> Vasya >> Tonya;
        if ((Petya + Vasya + Tonya) >= 2)
        {
            contador++;
        }
    }
    cout << contador << endl;
}