#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string convertToRoman(int n) {
        string str;
        int num[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string s[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int i=12;
        int j=0;
        while(n>0){
            int div = n/num[i];
            n = n%num[i];
            while(div--){
               str+=s[i];
            }
            i--;
        }
        return str;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		Solution ob;
    	cout<<ob.convertToRoman(N)<<endl;
	}
	return 0;
}
// } Driver Code Ends