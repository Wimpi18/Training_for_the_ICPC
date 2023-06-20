#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int i, j, contador = 0;
    int equipos, vLocal, vVisitante;
    cin >> equipos;
    int local[equipos];
    int visitante[equipos];
    int partidos = equipos * (equipos - 1);

    for (i = 0; i < equipos; i++)
    {
        cin >> vLocal >> vVisitante;
        local[i] = vLocal;
        visitante[i] = vVisitante;
    }
    for (i = 0; i < equipos; i++)
    {
        for (j = 0; j < equipos; j++)
        {
            if (local[i] == visitante[j])
            {
                contador++;
            }
        }
    }
    cout << contador << '\n';
}