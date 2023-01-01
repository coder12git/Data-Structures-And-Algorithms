//Maximum Length of Square that can be fit in a rectangle 
// having sides of length and breadth a and b.

// Optimized version of Euclidean Algorithm

#include<bits/stdc++.h>
using namespace std;

int gcdivisor(int a, int b){
    if(b==0){
        return a;
    }
    return gcdivisor(b,(a%b));
}

int main(){
    int a,b;
    cout<<"Enter"<<endl;
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcdivisor(a,b)<<endl;
    return 0;
}

//Time Complexity - O(log(min(a,b)))