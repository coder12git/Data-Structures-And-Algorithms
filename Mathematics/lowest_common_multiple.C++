#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,(a%b));
}

int main(){
    int a,b;
    cout<<"Enter"<<endl;
    cin>>a>>b;
    cout<<"Lcm of "<<a<<" and "<<b<<" is "<<(a*b)/gcd(a,b)<<endl;
    return 0;
}