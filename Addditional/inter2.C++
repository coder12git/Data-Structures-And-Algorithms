#include<bits/stdc++.h>
using namespace std;

string printString(string in){
    int n = in.length();
    unordered_set<char> chars;
    string res, final_res;
    for(int i=0; i<n; i++){
        if(chars.find(in[i])==chars.end()){
           chars.insert(in[i]);
           res+=in[i];
        } else {
            res+=' ';
        }
    }
    bool isPrevCharSpace = false;
    for(int i=0; i<res.length(); i++){
        if(res[i]==' '){
            if(isPrevCharSpace==false){
                final_res+=' ';
                isPrevCharSpace=true;
            }
        }
        else {
            final_res+=res[i];
            isPrevCharSpace=false;
        }
    }
    return res;
}

int main(){
    string in="Thisssisssmyyycountry";
    cout<<printString(in)<<endl;
    return 0;
}