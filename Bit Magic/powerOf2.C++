// Concept
// If the given number is power of 2, then it will have only one set bit in binary representation.

#include <bits/stdc++.h>
using namespace std;

bool checkPowerOfTwo(int n)
{
    // if(n==0){
    //     return false;
    // }
    return (n && ((n & (n - 1)) == 0));
}

int main()
{
    int n;
    cout << "Enter" << endl;
    cin >> n;
    cout << checkPowerOfTwo(n) << endl;
    return 0;
}

// Time Complexity - theta(1) or constant
// Auxiliary Space - constant