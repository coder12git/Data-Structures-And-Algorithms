

#include <bits/stdc++.h>
using namespace std;

void twoOddOccurring(int arr[], int n)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x = x ^ arr[i];
    }
    int k = (x & (~(x - 1))); // K is the number which has only one bit as set and that set bit corresponds to last set bit of x
    int res1 = 0;
    int res2 = 0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & k) != 0)
        {
            res1 = (res1 ^ arr[i]);
        }
        else
        {
            res2 = (res2 ^ arr[i]);
        }
    }
    cout << res1 << " " << res2 << endl;
}

int main()
{
    int arr[] = {3, 4, 3, 5, 5, 5};
    int l = sizeof(arr) / sizeof(arr[0]);
    twoOddOccurring(arr, l);
    return 0;
}


// Time Complexity - O(n) or Linear.