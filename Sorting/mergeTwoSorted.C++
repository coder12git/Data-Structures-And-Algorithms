#include<bits/stdc++.h>
using namespace std;

void mergeTwoSorted(int arr1[], int n, int arr2[], int m){
    int i=0, j=0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        } else{
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    if(i==n){
        for(j;j<m;j++){
            cout<<arr2[j]<<" ";
        }
    } else {
      for(i;i<n;i++){
        cout<<arr1[i]<<" ";
      }
    }
    cout<<endl;
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    mergeTwoSorted(arr1,n,arr2,m);

    return 0;
}