//Project Euler #4: Наибольшее палиндромное произведение 
//by Dimonchik0036

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;

	cin >> t;

	vector<int>palindrom;

	int a = 101101;

	for (a; a < 1000000; a++) {
		if (a % 10 == a / 100000)
			if (a / 10 % 10 == a % 100000 / 10000)
				if (a / 100 % 10 == a / 1000 % 10)
					palindrom.push_back(a);
	}

	for (int test = 0; test < t; test++) {

		int n;

		cin >> n;

		int u = 0;

		while (palindrom[u++] < n);

		bool y = 1;

		while (y) {
			int b = palindrom[u - 2];
			int a = 101;

			for (a; a <= 999; a++) {
				if ((b % a == 0) && (b / a < 1000) && (b / a > 99)) {
					cout << b << endl;

					y = 0;
					break;
				}
			}

			u--;
		}

	}

	return 0;
}
