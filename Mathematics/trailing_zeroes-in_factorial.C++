
// Concept - The number of trailing zeroes in any number means number of 2 and 5 pairs,
// since in factorial of any number number of 5 is always less than number of 2, so
// we just count the number of 5's in the factorial of a given number.

#include<bits/stdc++.h>
using namespace std;

int trailingZeroesInFactorial(int n){
   int res=0;
   for(int i=5;i<=n;i=i*5){
	res=res+(n/i);
   }
   return res;
}

int main(){
	int n;
	cout<<"Enter"<<endl;
	cin>>n;
	cout<<"The number of zeroes in factorial is "<<trailingZeroesInFactorial(n)<<endl;
	return 0;
}

//Effective Solution as it's time complexity is O(log(n)) or Theta(log(n))
