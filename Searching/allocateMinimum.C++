#include<bits/stdc++.h>
using namespace std;

bool isFeasible(int arr[], int n, int k, int mid){
    int count=0, sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum>mid){
            count+=1;
            sum=arr[i];
        } else if(sum==mid){
            count+=1;
            sum=0;
        }
    }
    if(sum!=0){
        count+=1;
    }
    return (count<=k);
}

int allocateMinPages(int arr[], int n, int k){
    int sum=0,ma=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        ma=max(ma,arr[i]);
    }
    int low=ma, high=sum;
    int res=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(isFeasible(arr,n,k,mid)){
          res=mid;
          high=(mid-1);
        } else{
            low=(mid+1);
        }
    }
  return res;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<allocateMinPages(arr,n,k)<<endl;
    return 0;
}