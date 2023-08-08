// Kadane's algorithm

#include <bits/stdc++.h>
using namespace std;

int maxSumSubArray(int arr[], int n)
{
    int res = arr[0], maxEnd = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnd = max(arr[i], (maxEnd + arr[i]));
        res = max(res, maxEnd);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << maxSumSubArray(arr, n) << endl;
    return 0;
}