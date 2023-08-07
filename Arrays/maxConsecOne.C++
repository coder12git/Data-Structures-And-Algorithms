#include <bits/stdc++.h>
using namespace std;

int maxConsecOne(int arr[], int n)
{
    int res = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count = 0;
        }
        else {
            count = count + 1;
            res = max(res, count);
        }
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
    cout << maxConsecOne(arr, n) << endl;
    return 0;
}