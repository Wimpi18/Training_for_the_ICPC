#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, altura = 0, patron = 0, p = 0;
    cin >> n;
    bool sePuede = true;
    while (n-patron >= 0)
    {
        p = p + 1;
        patron = patron + p;
        if (n-patron >= 0)
        {
            n-=patron;
            altura++;
        }
    }
    cout << altura << '\n';
}