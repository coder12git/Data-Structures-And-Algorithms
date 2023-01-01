// Finding all the prime numbers which are less than or equal to that given number.

#include <bits/stdc++.h>
using namespace std;

void printPrime(int n)
{
    vector<bool> vec((n + 1), true);
    if (n == 1)
    {
        cout << "Not prime";
    }
    for (int i = 2; i <= n; i++)
    {

        if (vec[i] == true)
        {
            cout << i << " ";

            for (int j = i * i; j <= n; j = j + i)
            {
                vec[j] = false;
            }
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter" << endl;
    cin >> n;
    printPrime(n);
    return 0;
}

// Time Complexity - O(n (log log (n)))