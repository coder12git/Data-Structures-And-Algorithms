#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (mid == x)
        {
            return mid;
        }
        else if (mid < x)
        {
            low = (mid + 1);
        }
        else
        {
            high = (mid - 1);
        }
    }
    return -1;
}

int search(int arr[], int x)
{
    if(arr[0]==x){
        return 0;
    }
    int i=1;
    while(arr[i]<x){
        i=i*2;
    }
    if(arr[i]==x){
        return i;
    }
    return binarySearch(arr,(i/2)+1,(i-1),x);
}

int main()
{
    int arr[] = {20, 40, 100, 300, 700, 900};
    int x;
    cin >> x;
    cout << search(arr, x) << endl;
    return 0;
}