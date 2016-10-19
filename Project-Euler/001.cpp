//Project Euler #1: Кратные 3 і 5
//by Dimonchik0036

#include <iostream>
using namespace std;

long long int foo(int n);

int main()
{
	long long int i, t, n;
	
  cin >> t;
	
  for (i = 0; i < t; i++)
	{
		cin >> n;
    
		cout << foo(n) << endl;
	}
  
	return 0;
}

long long int foo(int n)
{
    long long int p = 0;
    long long int sum = 0;
    
    p = (n - 1) / 3;
    sum += (3 * p * (p + 1)) >> 1;
    
    p = (n - 1) / 5;
    sum += (5 * p * (p + 1)) >> 1;
    
    p = (n - 1) / 15;
    sum -= (15 * p * (p + 1)) >> 1;
    
    return sum;
}
