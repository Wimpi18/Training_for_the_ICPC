#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos;
    cin >> casos;
    for (int c = 0; c < casos; c++)
    {
        int n, res, i = 3;
        cin >> n;
        for (int k = 3; n % i != 0 && i <= n; k++)
        {
            i += pow(2, k - 1);
            //cout << "el valor de i  " << i << '\n';
        }
        if (i > n)
        {
            res = n;
        }
        else
        {
            res = n / i;
        }
        cout << res << '\n';
    }
}