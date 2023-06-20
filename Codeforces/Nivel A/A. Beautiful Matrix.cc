#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int matriz[5][5];
    int posI, posJ, bit, movimientos;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> bit;
            if (bit == 1)
            {
                posI = i;
                posJ = j;
            }
        }
    }
    movimientos = abs(posI - 3) + abs(posJ - 3);
    cout << movimientos << "\n";
}