#include <bits/stdc++.h>
using namespace std;

// void leftRotate(int arr[], int n, int d){
//     int temp[d];
//     for(int i=0; i<d; i++){
//         temp[i]=arr[i];
//     }
//     for(int i=d; i<n; i++){
//         arr[i-d]=arr[i];
//     }
//     for(int i=0; i<d; i++){
//         arr[n-d+i]=temp[i];
//     }
// }

// Efficient solution
void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
void leftRotate(int arr[], int n, int d)
{
    reverse(arr, 0, (d - 1));
    reverse(arr, d, (n - 1));
    reverse(arr, 0, (n - 1));
}

int main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    leftRotate(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}