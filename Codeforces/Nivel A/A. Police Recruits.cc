#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int delitos, reclutas = 0, contador = 0, casos, input;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        cin >> input;
        if (input > 0)
        {
            reclutas += input;
        }
        if (input == -1)
        {
            if (reclutas - 1 < 0)
            {
                contador++;
            }
            else
            {
                reclutas--;
            }
        }
    }
    cout << contador << '\n';
}