#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, n;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        int res1, res2;
        cin >> n;
        res1 = res2 = n / 3;
        if (res1 + 2 * res2 == n)
        {
            cout << res1 << '\n';
            cout << res2 << '\n';
        }
        else if ((n - (res1 + 2 * res2)) % 2 == 0)
        {
            cout << res1 << '\n';
            cout << res2 + ((n - (res1 + 2 * res2)) / 2) << '\n';
        }
        else
        {
            cout << res1 + (n - (res1 + 2 * res2)) << '\n';
            cout << res2 << '\n';
        }
    }
}