#include <iostream>
#include <bits/basic_ios.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int casos, tam, num, pos, aux;
    cin >> casos;
    for (int i = 0; i < casos; i++)
    {
        cin >> tam;
        int matriz[tam];
        for (int j = 0; j < tam; j++)
        {
            cin >> num;
            matriz[j] = num;
        }
        if ((matriz[0] != matriz[1]) && (matriz[0] != matriz[2]))
        {
            cout << 1 << '\n';
        }
        else
        {
            for (int j = 1; j < tam-1; j++)
            {
                if((matriz[j] != matriz[j+1]) && (matriz[j] == matriz[j-1])){
                    cout << j+2 << '\n';
                    j = tam;
                } else if((matriz[j] != matriz[j+1]) && (matriz[j] != matriz[j-1])){
                    cout << j+1 << '\n';
                    j = tam;
                }
            }
        }
    }
}