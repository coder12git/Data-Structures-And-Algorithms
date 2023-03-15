// Given a Set and a sum, we need to find the number of subsets of the given set having sum equal to the given sum
// Recursive Solution

#include <bits/stdc++.h>
using namespace std;

int countSubsets(int arr[], int n, int sum)
{
    if (n == 0)
    {
        return (sum == 0 ? 1 : 0);
    }
    return (countSubsets(arr, (n - 1), sum) + countSubsets(arr, (n - 1), sum - arr[n - 1]));
}

int main()
{
    int n, sum;
    cout << "Enter" << endl;
    cin >> n >> sum;

    int arr[n];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << countSubsets(arr, n, sum) << endl;
    ;

    return 0;
}