#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int casos = 1; casos <= t; casos++)
    {
        int a, b;
        cin >> a >> b;
        int resultado = 1;
        if (a == 0)
        {
            cout << resultado << '\n';
        }
        else
        {
            cout << (a + b * 2 + 1) << '\n';
        }
    }
}