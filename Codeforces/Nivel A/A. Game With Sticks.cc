#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, control = 0;
    cin >> n >> m;
    while(n > 1 && m > 1){
        n -= 1;
        m -= 1;
        control++;
    }

    if (control%2 == 0)
    {
        cout << "Akshat" << '\n';
    }
    else
    {
        cout << "Malvika" << '\n';
    }
}