#include <bits/stdc++.h>
using namespace std;

// Normal Subarry Sum - Kadane's algo
// Circular Subarray Sum - (Overall sum)-(Min Subarray Sum)

int kadane(int arr[], int n)
{
    int res = arr[0];
    int max_end = arr[0];
    for (int i = 1; i < n; i++)
    {
        max_end = max(arr[i], (max_end + arr[i]));
        res = max(res, max_end);
    }
    return res;
}

int maxCirSumSub(int arr[], int n)
{
    int normal_sum = kadane(arr, n);
    if (normal_sum < 0)
    {
        return normal_sum;
    }
    int arr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        arr_sum += arr[i];
        arr[i] = -(arr[i]);
    }
    int circular_sum = arr_sum + kadane(arr, n); // (total sum - min sum)
    int res = max(normal_sum, circular_sum);
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
    cout << maxCirSumSub(arr, n) << endl;
    return 0;
}