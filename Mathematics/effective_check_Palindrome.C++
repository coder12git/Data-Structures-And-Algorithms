#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int n){
    int rev=0;
    int temp=n;
    while(temp>0){
        int d = (temp%10);
        rev=(rev*10)+ d;
        temp=temp/10;
    }
    return (rev==n);
}

int main(){
    int n;
    cout<<"Enter"<<endl;
    cin>>n;
    int res = checkPalindrome(n);
    if(res==1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}