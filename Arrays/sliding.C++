#include <bits/stdc++.h>
using namespace std;

int slidingWindow(int arr[], int n, int k)
{
    int res = INT_MIN;
    int curr = 0;
    for (int i = 0; i < k; i++)
    {
        curr = curr + arr[i];
    }
    res = max(res, curr);
    for (int i = k; i < n; i++)
    {
        curr = curr + arr[i] - arr[(i - k)];
        res = max(res, curr);
    }
    return res;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << slidingWindow(arr, n, k);
    return 0;
}