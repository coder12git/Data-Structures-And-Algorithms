#include<bits/stdc++.h>
using namespace std;

// Standard merge function
void merge(int arr[], int l, int m, int h){
    int n1 = m-l+1;
    int n2 = h-m;
    int left[n1], right[n2];
    for(int i=0; i<n1; i++){
       left[i]=arr[l+i];
    }
    for(int i=0; i<n2; i++){
       right[i]=arr[m+i+1];
    }
    int i=0, j=0, k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
            k++;
        } else {
            arr[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int h){
  if(h>l){
    int m = l+(h-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,h);
    merge(arr,l,m,h);
  }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,(n-1));
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}