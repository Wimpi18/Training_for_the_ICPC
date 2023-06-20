#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int partidas, partidasAnton = 0, partidasDanik = 0;
    string referencia;
    cin >> partidas >> referencia;
    for (int i = 0; i < partidas; i++)
    {
        if (referencia[i] == 'A')
        {
            partidasAnton++;
        }
        else
        {
            partidasDanik++;
        }
    }
    if (partidasAnton == partidasDanik)
    {
        cout<< "Friendship"<<'\n';
    }
    else if (partidasAnton > partidasDanik)
    {
        cout<< "Anton"<<'\n';
    }
    else
    {
        cout<< "Danik"<<'\n';
    }
}