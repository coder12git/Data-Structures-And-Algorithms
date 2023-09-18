#include<bits/stdc++.h>
using namespace std;

// Standard merge function
void unionOfTwo(int arr1[], int n, int arr2[], int m){
    int i=0, j=0;
    while(i<n && j<m){
    if(i>0 && arr1[i]==arr1[i-1]){
        i++;
        continue;
    }
    if(arr1[i]<arr2[j]){
        cout<<arr1[i]<<" ";
        i++;
    } else if (arr1[i]>arr2[j]){
        cout<<arr2[j]<<" ";
        j++;
    } else {
        cout<<arr1[i]<<" ";
        i++;
        j++;
    }
    }
    while(i<n){
        if(arr1[i]==arr1[i-1]){
            i++;
            continue;
        }
        else {cout<<arr1[i]<<" ";
        i++;}
    }
    while(j<m){
        if(arr2[j]==arr2[j-1]){
            j++;
            continue;
        }
        else{
            cout<<arr2[j]<<" ";
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
    unionOfTwo(arr1,n,arr2,m);
    return 0;
}