//Project Euler #8: Наибольшее произведение в наборе 
//by Dimonchik0036

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int massiv[1001];

	int t;

	cin >> t;

	for (int test = 0; test < t; test++)
	{
		int k, n;

		cin >> n >> k;

		getchar();

		int proi = 1;

		for (int i = 0; i < k; i++)
		{
			massiv[i] = getchar() - '0';

			proi *= massiv[i];
		}

		int maxProi = proi;

		for (int i = k; i < n; i++)
		{
			massiv[i] = getchar() - '0';

			if (massiv[i - k] != 0)
				proi = proi / massiv[i - k] * massiv[i];
			else
			{
				proi = 1;
				for (int j = 0; j < k; j++)
					proi *= massiv[i - j];
			}

			if (proi > maxProi)
				maxProi = proi;

		}

		cout << maxProi << endl;
	}

	return 0;
}
