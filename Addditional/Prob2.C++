#include<bits/stdc++.h>
using namespace std;

int getMaxToys(vector<int>& prices, int money){
  int res=0;
  int sum,count;
  for(int i=0; i<prices.size(); i++){
     sum=0, count=0;
   for(int j=i; j<prices.size(); j++){
      sum+=prices[j];
      if(sum>money){
        break;
      }
      count+=1;
   }
   res=max(res,count);
  }
  return res;
}

int main(){
    int n;
    cin>>n;
    vector<int> prices(n);
    for(int i=0; i<n; i++){
        cin>>prices[i];
    }
    int money;
    cin>>money;
    cout<<getMaxToys(prices,money)<<endl;
    return 0;
}