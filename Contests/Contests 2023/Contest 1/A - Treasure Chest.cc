#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, primero = -1, segundo = -1, asterisco = -1;
    string S;
    cin >> N >> S;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == '|')
        {
            if (primero == -1)
            {
                primero = i;
            }
            else
            {
                segundo = i;
            }
        }
        else if (S[i] == '*')
        {
            asterisco = i;
        }
    }

    if (asterisco > primero && asterisco < segundo)
    {
        cout << "in" << '\n';
    }
    else
    {
        cout << "out" << '\n';
    }
}