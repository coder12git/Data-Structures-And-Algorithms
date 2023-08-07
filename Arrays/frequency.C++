// When array is sorted

#include <bits/stdc++.h>
using namespace std;

void freq(int arr[], int n)
{
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count = count + 1;
        }
        else
        {
            cout << arr[i - 1] << ' ' << count << endl;
            count = 1;
        }
    }
    cout << arr[n - 1] << " " << count << endl;
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
    freq(arr, n);
    return 0;
}