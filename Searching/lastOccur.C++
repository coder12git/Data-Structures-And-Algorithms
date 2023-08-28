#include <bits/stdc++.h>
using namespace std;

int lastOccur(int arr[], int n, int x)
{
    int low = 0, high = (n - 1);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] < x)
        {
            low = (mid + 1);
        }
        else if (arr[mid] > x)
        {
            high = (mid - 1);
        }
        else
        {
            if (mid==(n-1) || arr[mid] != arr[mid + 1])
            {
                return mid;
            }
            else
            {
                low = (mid + 1);
            }
        }
    }
    return -1;
}

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << lastOccur(arr, n, x) << endl;
    return 0;
}