#include <bits/stdc++.h>
using namespace std;

void divisors(int n)
{
    int i;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    for (i; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << (n / i) << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter" << endl;
    cin >> n;
    divisors(n);
    return 0;
}

// Time Complexity - O(sqrt(n))
//  Auxiliary space - constant