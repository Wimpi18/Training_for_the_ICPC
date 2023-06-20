#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string op;
    cin >> op;
    for (int i = 0; i < op.length() - 1; i = i + 2)
    {
        for (int j = i + 2; j < op.length(); j = j + 2)
        {
            if(op[i] > op[j]){
                char aux = op[j];
                op[j] = op[i];
                op[i] = aux;
            }
        }
    }
    cout << op << '\n';
}