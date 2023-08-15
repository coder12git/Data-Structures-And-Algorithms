// An Efficient Solution is based on the below facts :

// There are only two types of groups (groups of 0s and groups of 1s)
// Either the counts of both groups are same or the difference between counts is at most 1. For example, in {1, 1, 0, 1, 0, 0} there are two groups of 0s and two groups of 1s.  In example, {1, 1, 0, 0, 0, 1, 0, 0, 1, 1}, count of groups of 1 is one more than the counts of 0s.

// Based on the above facts, we can conclude that if we always flip the second group and other groups that of the same type as the second group, we always get the correct answer.

#include <bits/stdc++.h>
using namespace std;

void minConsecFlips(bool arr[], int n)
{
    int s = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != s)
            {
                cout << "From " << i << " ";
            }
            else
            {
                cout << "to " << (i - 1) << endl;
            }
        }
    }
    if (arr[0] != arr[n - 1])
    {
        cout << "to " << (n - 1) << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    bool arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    minConsecFlips(arr, n);
    return 0;
}