#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a % b == 0)
    {
        if (a * c >= (a / b) * d)
        {
            cout << ((a / b) * d) << '\n';
        }
        else
        {
            cout << a * c << '\n';
        }
    }
    else
    {
        int casos[3] = {a * c, ((a / b) + 1) * d, (a / b) * d + (a - ((a / b) * b)) * c};
        // cout << a * c << '\n';
        // cout << ((a / b) + 1) * d << '\n';
        // cout << (a / b) * d + (a - ((a / b) * b)) * c << '\n';
        int *min = std::min_element(std::begin(casos), std::end(casos));
        cout << *min << '\n';
    }
}