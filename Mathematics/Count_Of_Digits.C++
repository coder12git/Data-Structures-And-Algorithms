#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int count=0;
  while(n>0){
   count+=1;
   n=n/10;
  }
  return count;
}

int main(){
    int n;
    cout<<"Enter"<<endl;
    cin>>n;
    cout<<"The number of digits in the given number "<<n<<" is "<<count(n)<<endl;
    return 0;
}