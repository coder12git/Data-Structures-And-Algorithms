#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s, int le){
    int l=0,h=le-1;
    int count=0;
    if(le==1){
        return true;
    }
    else{
       while(h>l){
        if(s[l]==s[h]){
            count+=1;
            l=l+1;
            h=h-1;
        }
        else{
            break;
        }
       }
       if(count==(le/2)){
        return true;
       }
       else{
        return false;
       }
    }

}

int main(){
    string num;
    cout<<"Enter"<<endl;
    cin>>num;
    int l = num.length();
    int res = checkPalindrome(num,l);
    if(res==0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
    
    return 0;
}