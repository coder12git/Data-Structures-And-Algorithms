// Given a Set and a sum, we need to find the number of subsets of the given set having sum equal to the given sum
// Recursive Solution


#include<bits/stdc++.h>
using namespace std;

int sumOfSubsets(string s,  int n, int i, string curr=" "){
    if(i==0){
        return ((n==0)?1:0);
    }

    return sumOfSubsets(s,n,(i-1),curr) + sumOfSubsets(s,(n-s[i-1]),(i-1),curr+s[i-1]);
    

}

int main(){
    int arr[]
    int sum;
    cout<<"Enter"<<endl;
    cin>>s>>sum;
    cout<<sumOfSubsets(s,sum,s.length())<<endl;
    return 0;
}