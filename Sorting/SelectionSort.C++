#include<bits/stdc++.h>
using namespace std;

// Optimised Approach
void selectionSort(int arr[], int n){
    int minIdx;
    for(int i=0; i<(n-1); i++){
        minIdx=i;
        for(int j=(i+1); j<(n); j++){
            if(arr[j]<arr[i]){
                minIdx=j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}