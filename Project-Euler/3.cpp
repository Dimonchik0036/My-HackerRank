//Project Euler #3: Наибольший простой множитель 
//by Dimonchik0036

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	unsigned long long int a, del, k, v;

	bool y, flag;

	for (int i = 0; i < n; i++)
	{
		y = true;
		cin >> a;

		while (a % 100 == 0)
			a /= 10;

		del = 1;

		while (y)
		{
			if (!(a % del))
			{
				k = a / del;

				if (k % 2)
				{
					flag = 1;

					for (v = 3; v <= (int)sqrt(k); v += 2)
					{
						if (!(k % v))
						{
							flag = 0;
							break;
						}
					}

					if (flag)
					{
						y = 0;

					}
				}

			}

			del++;
		}

		cout << k << endl;
	}

	return 0;
}
