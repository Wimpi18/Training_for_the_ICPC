#include <bits/stdc++.h>
using namespace std;
int main()
{
    int K;
    string res = "";
    cin >> K;
    string abecedario = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < K; i++)
    {
        res = res + abecedario[i];
    }
    cout << res << '\n';
}