
// Here ^ = Bitwise XOR operator
// x^0=x
// x^y=y^x
// x^(y^z)=(x^y)^z
// x^x=0

#include <bits/stdc++.h>
using namespace std;

int oneOddOccurring(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}

int main()
{
    int arr[] = {2, 3, 2, 5, 5};
    int l = sizeof(arr) / sizeof(arr[0]);
    cout << oneOddOccurring(arr, l) << endl;
    return 0;
}

// Time Complexity - theta(n)
// Auxiliary Space - theta(1) or consant