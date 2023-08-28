#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minSeg = INT_MAX;
    int maxMin = INT_MIN;
    int count=0;
    for (int i = 0; i < n; i++)
    {
      if(count==x){
        maxMin = max(maxMin,minSeg);
        count=0;
        minSeg=INT_MAX;
      }
      else {
        minSeg=min(minSeg,arr[i]);
        count+=1;
      }
    }
    cout<<maxMin<<endl;
    return 0;
}