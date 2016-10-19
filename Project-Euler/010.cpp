//Project Euler #10: Суммирование простых чисел 
//by Dimonchik0036

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
	vector<int>numbers;
	numbers.push_back(2);
	numbers.push_back(3);

	int t;

	cin >> t;

	for (int test = 0; test < t; test++)
	{
		int n;

		cin >> n;

		if (n > numbers[numbers.size() - 1])
		{
			while (numbers[numbers.size() - 1] <= n)
			{
				bool y = 1;

				int a = numbers[numbers.size() - 1];

				while (y)
				{
					a += 2;

					if (a % 2)
					{
						int flag = 1;

						for (int j = 3; j <= (int)sqrt(a); j += 2)
						{
							if (!(a % j))
							{
								flag = 0;
								break;
							}
						}
						if (flag)
						{
							numbers.push_back(a);
							y = 0;
						}
					}

				}

			}
		}

		unsigned long long int sum = 0;

		for (int j = 0; numbers[j] <= n; j++)
			sum += numbers[j];

		cout << sum << endl;

	}

	return 0;
}
