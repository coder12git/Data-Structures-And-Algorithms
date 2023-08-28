#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.end(),greater<char>());
    int sum=0, res=0;
    for(int i=0; i<n; i++){
        sum+=s[i]-'0';
    }
    for(int i=0; i<n; i++){
        if(res>sum){
            break;
        }
        res+=s[i]-'0';
        sum-=s[i]-'0';  
    }
    cout<<res<<endl;
    return 0;
}