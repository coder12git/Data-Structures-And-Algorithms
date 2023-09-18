#include<bits/stdc++.h>
using namespace std;

void intersection(int arr1[], int n, int arr2[], int m){
    int i=0, j=0;
    while(i<n && j<m){
    if(i>0 && arr1[i]==arr1[i-1]){
        i++;
        continue;
    }
    if(arr1[i]<arr2[j]){
        i++;
    } else if (arr1[i]>arr2[j]){
        j++;
    } else {
        cout<<arr1[i]<<" ";
        i++;
        j++;
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
    intersection(arr1,n,arr2,m);
    return 0;
}