// Concept

// power(x,n) = power(x,(n/2))*power(x,(n/2)); if n is even
//              power(x,(n-1))*x; if n is odd

#include <bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int temp = power(x, (n / 2));
    temp = temp * temp;
    if (n % 2 == 0)
    {
        return temp;
    }
    return temp * x;
}

int main()
{
    int x, n;
    cout << "Enter" << endl;
    cin >> x >> n;
    cout << power(x, n) << endl;
    return 0;
}

// Time Complexity - O(log(n))
// Auxiliary Space - O(log(n)) , because the given solution is recursive.