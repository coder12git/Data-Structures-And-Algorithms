#include <bits/stdc++.h>
using namespace std;

void getSum(int l, int r, int p[])
{
    if (l == 0)
    {
        cout << p[r] << " ";
    }
    else
    {
        cout << p[r] - p[l - 1] << " ";
    }
}

void getWSum(int l, int r, int w[], int p[])
{
    if (l == 0)
    {
        cout << w[r] + p[r] << " ";
    }
    else
    {
        cout << (w[r] - w[l - 1]) - ((l - 1) * ((p[r] - p[l - 1]))) << " ";
    }
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
    int p[n], w[n];
    int sum = 0, s = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        s += (i * arr[i]);
        p[i] = sum;
        w[i] = s;
    }
    // getSum(0, 2, p);
    // getSum(1, 3, p);
    // getSum(2, 6, p);
    getWSum(0, 2, w, p);
    getWSum(2, 3, w, p);
    cout << endl;
    return 0;
}