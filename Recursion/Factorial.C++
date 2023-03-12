#include <bits/stdc++.h>
using namespace std;

int findFactorial(int n, int k=1)
{
    if (n == 0 || n == 1)
    {
        return k;
    }
    return findFactorial((n-1), (n*k)); // Tail Recursive Solution, so it takes less time 
}

int main()
{
    int n;
    cout << "Enter" << endl;
    cin >> n;
    cout << findFactorial(n) << endl;
    return 0;
}