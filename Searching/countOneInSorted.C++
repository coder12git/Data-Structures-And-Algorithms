#include <bits/stdc++.h>
using namespace std;

int countOne(int arr[], int n)
{
    int low = 0, high = (n - 1);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == 0)
        {
            low = (mid + 1);
        }
        else
        {
            if (mid == 0 || arr[mid] != arr[mid - 1])
            {
                return (n - mid);
            }
            else
            {
                high = (mid - 1);
            }
        }
    }
    return 0;
}

int countZero(int arr[], int n)
{
    int low = 0, high = (n - 1);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == 1)
        {
            high = (mid - 1);
        }
        else
        {
            if (mid == (n - 1) || arr[mid + 1] != arr[mid])
            {
                return mid + 1;
            }
            else
            {
                low = (mid + 1);
            }
        }
    }
    return 0;
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
    cout << countOne(arr, n) << " " << countZero(arr, n) << endl;
    return 0;
}