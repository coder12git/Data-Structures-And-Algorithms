#include<bits/stdc++.h>
using namespace std;
// Two Pointer

bool twoPointer(int arr[], int n, int x){
    int i=0, j=(n-1);
    while(i<j){
      if(arr[i]+arr[j]>x){
        j--;
      } else if(arr[i]+arr[j]<x){
        i++;
      } else {
        return true;
      }
    } 
    return false;
}

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<twoPointer(arr,n,x)<<endl;
    return 0;
}