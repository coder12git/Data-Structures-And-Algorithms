#include<bits/stdc++.h>
using namespace std;

int firstOccur(int arr[], int n, int x){
  int low=0, high=(n-1);
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]<x){
        low=(mid+1);
    } else if (arr[mid]>x){
        high=(mid-1);
    } else {
        if(mid==0 || arr[mid-1]!=arr[mid]){
            return mid;
        } else {
            high = (mid-1);
        }
    }
  }
  return -1;
}

int lastOccur(int arr[], int n, int x){
  int low=0, high=(n-1);
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]<x){
        low=(mid+1);
    } else if (arr[mid]>x){
        high=(mid-1);
    } else {
        if(mid==(n-1) || arr[mid+1]!=arr[mid]){
            return mid;
        } else {
            low=(mid+1);
        }
    }
  }
  return -1;
}

int countOccur(int arr[], int n, int x){
    int first = firstOccur(arr,n,x);
    if(first == -1){
        return 0;
    } 
    return ((lastOccur(arr,n,x)-first)+1);
}

int main(){
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<countOccur(arr,n,x)<<endl;
    return 0;
}