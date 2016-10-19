//Project Euler #6: Разница сумм квадратов
//by Dimonchik0036

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<long long int>number;
	number.push_back(1);

	int t;

	cin >> t;

	for (int test = 0; test < t; test++)
	{
		int n;

		cin >> n;

		long long int sum1, sum2;

		sum1 = n*(n + 1) / 2;
		sum1 *= sum1;

		sum2 = 0;

		int i = number.size();

		if (n > i)
		{
			for (i; i <= n; i++)
				number.push_back((i + 1)*(i + 1));

		}

		for (int j = 0; j < n; j++)
			sum2 += number[j];

		cout << sum1 - sum2 << endl;
	}

	return 0;
}
