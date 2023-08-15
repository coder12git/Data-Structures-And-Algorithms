#include <bits/stdc++.h>
using namespace std;

bool checkEqub(int arr[], int n)
{
    int rSum = 0, lSum = 0;
    for (int i = 0; i < n; i++)
    {
        rSum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        rSum -= arr[i];
        if (lSum == rSum)
        {
            return true;
            break;
        }
        lSum += arr[i];
    }
    return false;
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
    cout << checkEqub(arr, n) << endl;
    return 0;
}