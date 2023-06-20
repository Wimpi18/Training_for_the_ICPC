#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string resultado = "", n1, n2;
    cin >> n1 >> n2;
    for (int i = 0; i < n1.length(); i++)
    {
        if (n1[i] == n2[i])
        {
            resultado = resultado + '0';
        }
        else
        {
            resultado = resultado + '1';
        }
    }
    cout << resultado << '\n';
}