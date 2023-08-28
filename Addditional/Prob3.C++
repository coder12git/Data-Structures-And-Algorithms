#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    map<string,int> m;
    for(int i=0; i<n; i++){
        if(m[vec[i]]>0){
          cout<<vec[i]<<m[vec[i]]<<endl;
        } else {
            cout<<vec[i]<<endl;
        }
        m[vec[i]]++;
    }
    return 0;
}