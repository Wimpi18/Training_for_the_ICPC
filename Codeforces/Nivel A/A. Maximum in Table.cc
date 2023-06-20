#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int matriz[n][n];
    for (int i = 0; i < n; i++)
    {
        matriz[0][i] = 1;
        matriz[i][0] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            matriz[i][j] = matriz[i][j - 1] + matriz[i - 1][j];
            matriz[j][i] = matriz[i][j];
        }
    }
    cout << matriz[n-1][n-1] << '\n';
}