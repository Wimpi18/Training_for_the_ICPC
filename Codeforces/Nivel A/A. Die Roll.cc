#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int y, w, res;
    cin >> y >> w;
    res = 7 - max(y, w);

    if (6 % res == 0)
    {
        cout << "1/" << 6/res << '\n';
    }
    else if (res % 2 == 0)
    {

        cout << res / 2 << "/" << 6 / 2 << '\n';
    }
    else
    {
        cout << res << "/6" << '\n';
    }
}