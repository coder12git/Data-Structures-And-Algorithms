/* Concept-
 To check that last bit is set or not we do - (n&1) that is (n&2^0)
 Similarly to check kth bit is set or not, we will simply check that-
 (n&2^(k-1)) is equal to 0 or not.
 If, (n&2^(k-1))!=0 that means that kth bit is set (i.e 1). 
*/

#include<bits/stdc++.h>
using namespace std;

// Method 1 - Using left shift operator
void checkSetBit(int n, int k){
    int x = 1<<(k-1); // x=(2^(k-1))

    if(n&x!=0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}

// Method 2 - Using Right sift operator 
void checkSetBit(int n, int k){
    int x = n>>(k-1); // x=(n/(2^(k-1)))

    if(x&1!=0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}

int main(){
    int n,k;
    cout<<"Enter"<<endl;
    cin>>n>>k;
    checkSetBit(n,k);
    return 0;
}