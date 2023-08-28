#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int res=0, f=0;
    if(stoi(s1)<stoi(s2)){
        cout<<"Impossible"<<endl; 
    } 
    else{reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    for(int i=0; i<s1.size(); i++){
        if(s1[i]<s2[i]){
          res+=1;
          f=1;
        } else if(s1[i]==s2[i]){
            if(f==1){
                res+=1;
            } 
        } else {
            f=0;
        }
    }
    cout<<res<<endl;}
    return 0;
}