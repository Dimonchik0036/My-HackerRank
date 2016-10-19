//Project Euler #13: Большая сумма
//by Dimonchik0036

#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[50] = { 0 };
	int newArr[50];

	cin >> n;
	getchar();

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 50; j++)
			newArr[j] = getchar() - '0';

		getchar();

		for (int i = 49; i > 0; i--)
		{
			if ((arr[i] += newArr[i]) > 9)
			{
				arr[i - 1] += 1;
				arr[i] -= 10;
			}
		}

		arr[0] += newArr[0];

	}
	int k = -1;
	int m = arr[0];
	while (m > 0)
	{
		k++;
		m /= 10;
	}

	for (int i = 0; i < 10 - k; i++)
		cout << arr[i];

	return 0;
}
