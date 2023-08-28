#include <bits/stdc++.h>
using namespace std;

int squareRoot(int n)
{
    int low = 1, high = 10, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int mSq = mid * mid;
        if (mSq == n)
        {
            return mid;
        }
        else if (mSq > n)
        {
            high = (mid - 1);
        }
        else
        {
            low = (mid + 1);
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << squareRoot(n) << endl;
    return 0;
}