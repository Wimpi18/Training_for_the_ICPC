#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string suma_i;
    cin >> suma_i;
    int min;
    for (int i = 0; i < suma_i.length(); i = i + 2)
    {
        min = i;
        for (int j = i + 2; j < suma_i.length(); j = j + 2)
        {
            if (suma_i[j] < suma_i[min])
            {
                min = j;
            }
        }
        char aux = suma_i[i];
        suma_i[i] = suma_i[min];
        suma_i[min] = aux;
    }

    cout << suma_i << endl;
}