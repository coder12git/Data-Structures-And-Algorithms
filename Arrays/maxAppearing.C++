#include <bits/stdc++.h>
using namespace std;

int maxAppear(int left[], int right[], int n)
{
    int f[101] = {0};
    for (int i = 0; i < n; i++)
    {
        f[left[i]] += 1;
        f[right[i] + 1] -= 1;
    }
    int res = 0;
    for (int i = 1; i < 100; i++)
    {
        f[i] += f[i - 1];
    }
    for (int i = 1; i < 100; i++)
    {
        if (f[i] > f[res])
        {
            res = i;
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int left[n], right[n];
    for (int i = 0; i < n; i++)
    {
        cin >> left[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> right[i];
    }
    cout << maxAppear(left, right, n) << endl;
    return 0;
}