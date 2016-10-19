//Project Euler #5: Наименьшее кратное
//by Dimonchik0036

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;

	cin >> t;

	for (int test = 0; test < t; test++)
	{
		int n;

		cin >> n;

		int min = 1;

		for (int i = 2; i <= n; i++)
		{
			if (min % i)
			{
				int u = 1;

				while (i % ++u)
					if (u  > i)
						break;

				if (u <= i)
					min *= (u);
			}
		}

		cout << min << endl;
	}

	return 0;
}
