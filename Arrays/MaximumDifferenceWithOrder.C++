#include <bits/stdc++.h>
using namespace std;

int maxDiff(int arr[], int n)
{
    int min_val = arr[0];
    int res = arr[1] - arr[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, (arr[i] - min_val));
        min_val = min(min_val, arr[i]);
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
    cout << maxDiff(arr, n) << endl;
    return 0;
}