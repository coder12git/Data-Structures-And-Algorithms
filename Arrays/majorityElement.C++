// Moore’s Voting Algorithm
// To find mazority element

#include <bits/stdc++.h>
using namespace std;

int checkMazority(int arr[], int n)
{
    // Find the candidate
    int res = 0, count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[res])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }

    count = 0;

    // Check if the candidate return is actually a mazority element
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count = count + 1;
        }
    }
    if (count <= (n / 2))
    {
        res = -1;
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
    cout << checkMazority(arr, n) << endl;
    return 0;
}