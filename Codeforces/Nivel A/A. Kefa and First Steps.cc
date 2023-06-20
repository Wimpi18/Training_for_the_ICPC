#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, a, res = 0, contador = 1;
    cin >> n;
    vector<int> array;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        array.push_back(a);
    }
    for (int i = 0; i < n-1; i++)
    {
        if(array[i] <= array[i+1]){
            contador++;
        } else{
            if(res < contador){
                res = contador;
            }
            contador = 1;
        }
    }
    cout << max(res, contador) << '\n';
}