#include <bits/stdc++.h>
using namespace std;

// Given that array is sorted
// int binarySearch(int arr[], int n, int x)
// {
//     int low = 0, high = (n - 1);
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] == x)
//         {
//             return mid;
//         }
//         else if (arr[mid] < x)
//         {
//             low = (mid + 1);
//         }
//         else
//         {
//             high = (mid - 1);
//         }
//     }
//     return -1;
// }

// Recursive Solution
int binarySearch(int arr[], int low, int high, int x)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == x)
    {
        return mid;
    }
    else if (arr[mid] > x)
    {
        return binarySearch(arr, low, (mid - 1), x);
    }
    else
    {
        return binarySearch(arr, (mid + 1), high, x);
    }
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
    cout << binarySearch(arr, 0, (n - 1), x) << endl;
    return 0;
}