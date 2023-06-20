#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int cantEstudiantes, habilidad, contador1 = 0, contador2 = 0, contador3 = 0, posibilidades;
    bool hab1, hab2, hab3, conjunto;
    cin >> cantEstudiantes;
    int array[cantEstudiantes];
    for (int i = 0; i < cantEstudiantes; i++)
    {
        cin >> habilidad;
        if (habilidad == 1)
        {
            contador1++;
        }
        else if (habilidad == 2)
        {
            contador2++;
        }
        else
        {
            contador3++;
        }
        array[i] = habilidad;
    }

    if (contador1 < contador2)
    {
        posibilidades = contador1;
    }
    else
    {
        posibilidades = contador2;
    }
    if (contador3 < posibilidades)
    {
        posibilidades = contador3;
    }

    if (contador1 > 0 && contador2 > 0 && contador3 > 0)
    {
        cout << posibilidades << '\n';
        for (int i = 0; i < posibilidades; i++)
        {
            hab1 = false;
            hab2 = false;
            hab3 = false;
            conjunto = false;
            for (int j = 0; j < cantEstudiantes && !conjunto; j++)
            {
                if (!hab1)
                {
                    if (array[j] == 1)
                    {
                        array[j] = 0;
                        hab1 = true;
                        cout << j + 1 << '\n';
                        j++;
                    }
                }
                if (!hab2)
                {
                    if (array[j] == 2)
                    {
                        array[j] = 0;
                        hab2 = true;
                        cout << j + 1 << '\n';
                        j++;
                    }
                }
                if (!hab3)
                {
                    if (array[j] == 3)
                    {
                        array[j] = 0;
                        hab3 = true;
                        cout << j + 1 << '\n';
                        j++;
                    }
                }

                if (hab1 && hab2 && hab3)
                {
                    conjunto = true;
                }
            }
        }
    }
    else
    {
        cout << 0 << '\n';
    }
}