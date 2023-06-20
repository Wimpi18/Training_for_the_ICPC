#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    bool esPalindromo = true;
    int j = 10;
    int lengthN = 1;
    int auxN = N;
    while (auxN / 10 != 0)
    {
        auxN = auxN / 10;
        if (N % j == 0)
        {
            N = N / 10;
            lengthN--;
        }
        lengthN++;
    }

    long long lengthOriginal = lengthN;
    for (long long i = 0; esPalindromo && i < lengthOriginal / 2; i++)
    {
        //cout << "Comparo el " << (N / (long long)pow(10, lengthN - 1)) << " con el " << (N % 10) << '\n';
        if (N / (long long)pow(10, lengthN - 1) != N % 10)
        {
            esPalindromo = false;
        }
        N = (N % (long long)pow(10, lengthN - 1)) / 10;
        lengthN = lengthN - 2;
        //cout << "El nuevo N es " << N << '\n';
    }

    if (esPalindromo)
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
    }
}