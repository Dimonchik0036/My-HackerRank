//Project Euler #2: Четные числа 
//by Dimonchik0036

#include <iostream>
using namespace std;

int main() 
{
    int t;
    
    unsigned long long n, a, b, c, sum;
    
    cin >> t;
    
    for (int i= 0; i < t; i++)
    {
        sum = 0;
        cin >> n;
        a = 1;
        b = 2;
        c = 2;
        while (c <= n)
        {
          if (c%2 == 0)
            sum+=c;
            
          c = a + b;
          a = b;
          b = c;
         }
         
        cout << sum << endl;
      }
      
    return 0;
}
