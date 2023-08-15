#include <bits/stdc++.h>
using namespace std;

bool subArrayWithGivenSum(int arr[], int n, int sum)
{
    int s = 0, curr = 0;
    for (int e = 0; e < n; e++)
    {
        curr += arr[e];
        while (curr > sum)
        {
            curr -= arr[s];
            s++;
        }
        if (curr == sum)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n, sum;
    cin >> n >> sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << subArrayWithGivenSum(arr, n, sum) << endl;
    return 0;
}