#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int i=0;
    int words=0;
    while(s[i]){
      char ch = s[i];
      if(isblank(ch) && isalpha(s[i+1])){
        words+=1;
      } 
      i++;
    }
    if((words+1)%2==0){
        cout<<(words+1)/2<<endl;
    } else {
        cout<<((words+1)/2)+1<<endl;
    }
    return 0;
}