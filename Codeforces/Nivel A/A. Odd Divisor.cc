#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long casos;
    cin >> casos;
    for (long long c = 0; c < casos; c++)
    {
        long long n;
        cin >> n;
        while (n % 2 == 0)
        {
            n /= 2;
        }
        if (n % 2 != 0 && n != 1)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}