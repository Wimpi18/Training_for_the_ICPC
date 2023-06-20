#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int contador = 0;
    string nickname;
    cin >> nickname;
    for (int i = 0; i < nickname.length(); i++)
    {
        for (int j = i + 1; j < nickname.length() && nickname[i] != '.'; j++)
        {
            if (nickname[i] == nickname[j])
            {
                nickname[j] = '.';
                contador++;
            }
        }
    }
    if ((nickname.length() - contador) % 2 == 0)
    {
        cout << "CHAT WITH HER!" << '\n';
    }
    else
    {
        cout << "IGNORE HIM!" << '\n';
    }
}