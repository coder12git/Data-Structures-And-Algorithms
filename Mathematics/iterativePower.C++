// We use this approach so that our program takes constant auxiliary space,
// however time complexity is same as previous approach.

// Concept (Binary Exponentiation)
//  - Every Number can be represent as sum of powers of 2 (Set bits in binary representation)
//  - We can traverse through all the bits of a number from (LSB to MSB) in O(log(n)) time

#include <bits/stdc++.h>
using namespace std;

int power(int x, int n)
{
    int res = 1;
    while (n > 0)
    {
        if (n & 1)
        { // n is odd
            res = res * x;
        }
        x = x * x;
        n = n >> 1; // using right shift binary operator which indicates n = n/2
    }
    return res;
}

int main()
{
    int x, n;
    cout << "Enter" << endl;
    cin >> x >> n;
    cout << power(x, n) << endl;
    return 0;
}

// -----Note-----
// If n is large we can get or result in long long
// If want our result under modulo m, then use -
// res=(res*x)%m and x=(x*x)%m

// Time Complexity - O(log(n))
// Auxiliary space - O(1) or constant