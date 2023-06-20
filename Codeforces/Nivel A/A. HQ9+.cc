#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string p;
    cin >> p;
    bool esUnaBroma = false;
    for (int i = 0; i < p.size() && !esUnaBroma; i++)
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9' /*|| p[i] == '+' || p[i] == 'h' || p[i] == 'q'*/)
        {
            esUnaBroma = true;
        }
    }
    if (esUnaBroma)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}