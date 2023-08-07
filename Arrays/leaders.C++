#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int arr[], int n)
{
    vector<int> vec;
    int curr_leader = arr[n - 1];
    vec.push_back(curr_leader);
    for (int i = (n - 2); i >= 0; i--)
    {
        if (arr[i] > curr_leader)
        {
            curr_leader = arr[i];
            vec.push_back(curr_leader);
        }
    }
    reverse(vec.begin(), vec.end());
    return vec;
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
    vector<int> res;
    res = leaders(arr, n);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}