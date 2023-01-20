// Given an array, the task is to find the
// Maximum AND value of  a pair in an array

#include<bits/stdc++.h>
using namespace std;

// Utility function to check number of elements
// having set msb as of pattern
int checkPattern(int pattern, int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        if((pattern&arr[i])==pattern){
            count++;
        }
    }
    return count;
}

// Function for finding maximum and value pair
int maximumAND(int arr[], int n){
  int res=0,count;
  for(int bit=31;bit>=0;bit--){
    count=checkPattern((res|(1<<bit)),arr,n);

    if(count>=2){
        res=(res|(1<<bit));
    }
  }
  return res;
}

int main(){
    int arr[]={4,8,16,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maximumAND(arr,n)<<endl;
    return 0;
}

// Time Complexity - O(n*log(m)), n=Size of the array, m=Maximum element from the array
// Auxiliary Space - O(1) or constant