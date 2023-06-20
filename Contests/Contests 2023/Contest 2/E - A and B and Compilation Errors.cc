#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int x;
	int x1[N];
	int x2[N - 1];
	int x3[N - 2];

	for (int j = 0; j < N; j++)
	{
		cin >> x1[j];
	}

	for (int j = 0; j < N - 1; j++)
	{
		cin >> x2[j];
	}

	for (int j = 0; j < N - 2; j++)
	{
		cin >> x3[j];
	}

	sort(x2, x2 + N - 1);
	sort(x3, x3 + N - 2);

    int i, j, aux;
    for (i = 0; i < N-1; i++)
    {
        for (j = 0; j < N-1; j++)
        {
            if (numeros1[j] > numeros1[j + 1])
            {
                aux = numeros1[j];
                numeros1[j] = numeros1[j + 1];
                numeros1[j + 1] = aux;
            }
        }
    }

	i, j, aux;
    for (i = 0; i < N-2; i++)
    {
        for (j = 0; j < N-2; j++)
        {
            if (numeros1[j] > numeros1[j + 1])
            {
                aux = numeros1[j];
                numeros1[j] = numeros1[j + 1];
                numeros1[j + 1] = aux;
            }
        }
    }

	// for (int j = 0; j < N; j++)
	// {
	// 	cout << x1[j] << " ";
	// }

	// cout << '\n';
	// for (int j = 0; j < N - 1; j++)
	// {
	// 	cout << x2[j] << " ";
	// }

	// cout << '\n';
	// for (int j = 0; j < N - 2; j++)
	// {
	// 	cout << x3[j] << " ";
	// }
}