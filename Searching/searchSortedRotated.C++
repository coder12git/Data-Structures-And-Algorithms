#include<bits/stdc++.h>
using namespace std;

int searchRot(int arr[], int low, int high, int x){
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]==x){
      return mid;
    } else if (arr[mid]>=arr[low]){
      if(x>=arr[low] && x<arr[mid]){
        high=(mid-1);
      } else {
        low=(mid+1);
      }
    } else if(arr[mid]<=arr[high]){
      if(x>arr[mid] && x<=arr[high]){
        low=(mid+1);
      } else {
        high = (mid-1);
      }
    }
  }
  return -1;
}

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<searchRot(arr,0,(n-1),x)<<endl;
    return 0;
}