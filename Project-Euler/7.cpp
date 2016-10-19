//Project Euler #7: 10001ое простое число
//by Dimonchik0036

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
	vector<int>numbers;
	numbers.push_back(2);

	int t;

	cin >> t;

	for (int test = 0; test < t; test++)
	{
		int n;

		cin >> n;

		if (n > numbers.size())
		{
			for (int i = numbers.size(); i <= n; i++)
			{
				bool y = 1;

				int a = numbers[i - 1];

				while (y)
				{
					a++;

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

		cout << numbers[n - 1] << endl;

	}

	return 0;
}
