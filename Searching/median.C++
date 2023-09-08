#include <bits/stdc++.h>
using namespace std;

// Asume that array a is always less thatn or equal to b
double median(int a[], int n1, int b[], int n2)
{
    int low1 = 0, high1 = n1;
    while (low1 <= high1)
    {
        int i1 = (low1 + high1) / 2;
        int i2 = ((n1 + n2 + 1) / 2) - i1;
        int min1 = (i1 == n1) ? INT_MAX : a[i1];
        int max1 = (i1 == 0) ? INT_MIN : a[i1 - 1];

        int min2 = (i2 == n2) ? INT_MAX : b[i2];
        int max2 = (i2 == 0) ? INT_MIN : b[i2 - 1];

        if (max1 <= min2 && min1 >= max2)
        {
            if ((n1 + n2) % 2 == 0)
            {
                return (double)(max(max1, max2) + min(min1, min2)) / 2;
            }
            else
            {
                return (double)max(max1, max2);
            }
        }
        else if (max1 > min2)
        {
            high1 = (i1 - 1);
        }
        else
        {
            low1 = i1 + 1;
        }
    }
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int a[n1], b[n2];
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    cout << median(a, n1, b, n2) << endl;
    return 0;
}