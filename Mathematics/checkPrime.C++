// Concept - Effective Solution
// Divisors always exists in pairs.

#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter" << endl;
    cin >> n;

    if (checkPrime(n) == 1)
    {
        cout << n << " is prime." << endl;
    }
    else
    {
        cout << n << " is not prime." << endl;
    }

    return 0;
}

// Time Complexity - O(sqrt(n))