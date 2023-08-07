#include<bits/stdc++.h>
using namespace std;

int firstLargest(int arr[], int n){
    int res=0;
    int i=1;
    for(i;i<n;i++){
        if(arr[i]>arr[res]){
            res=i;
        }
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<firstLargest(arr,n)<<endl;
    return 0;
}