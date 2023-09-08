#include<bits/stdc++.h>
using namespace std;

// TRiplet in Sorted Array

bool isPairTriplet(int arr[], int n, int x, int s){
    int e = (n-1);
    while(s<e){
        if(arr[s]+arr[e]==x){
            return true;
        } else if (arr[s]+arr[e]>x){
            e--;
        } else {
            s++;
        }
    }
    return false;
}

bool triplet(int arr[], int n, int x){
    for(int i=0; i<(n-2); i++){
        if(isPairTriplet(arr,n,(x-arr[i]),i+1)){
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
    cout<<triplet(arr,n,x)<<endl;
    return 0;
}