#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(int arr[], int n){
    int res=1;
    for(int i=1; i<n; i++){
        if(arr[i]!=arr[res-1]){
           arr[res]=arr[i];
           res++;
        }
    }
    for(int i=0; i<res; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<res<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    removeDuplicates(arr,n);
    return 0;
}