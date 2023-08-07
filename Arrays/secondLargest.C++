#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n){
    int res1=0, res2=-1;
    for(int i=1; i<n;i++){
        if(arr[i]>arr[res1]){
            res2=res1;
            res1=i;
        }
        else if(arr[i]!=arr[res1]){
            if(res2==(-1)||arr[i]>arr[res2]){
                res2=i;
            }
        }
    }
    return res2;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<secondLargest(arr,n);
    return 0;
}

// Time Complexity - theta(n)