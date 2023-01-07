#include <bits/stdc++.h>
using namespace std;

// Naive Approach - Time Complexity = theta(d), where d is the no. of bits from LSB to MSB
// int countSetBits(int n){
//     int count=0;
//     while(n>0){
//         if(n&1!=0){
//             count=count+1;
//         }
//         n=n>>1;
//     }
//     return count;
// }

// Brian Kerningam's Algorithm (Traverse through only the set bits)
// Time Complexity - theta(Set Bits)
// int countSetBits(int n){
//     int res=0;
//     while(n>0){
//         n = n&(n-1); // (n-1) in binary form = Convert all the trailing zeroes to 1 and the last 1 to 0.
//         res=res+1;
//     }
//     return res;
// }

//----- Most Efficient Solution -------
// Look-up table
// Time Complexity - theta(1) or constant
int table[256];
void initialize()
{
    table[0] = 0;
    for (int i = 1; i < 256; i++)
    {
        table[i] = table[i & (i - 1)] + 1;
    }
}

int countSetBits(int n)
{
    return table[n & 255] + table[(n >> 8) & 255] + table[(n >> 16) & 255] + table[(n >> 24)];
}
// In 255 which can be written as 0xff in hexadecimal form has all it's first 24 bits as 0
// and last 8 bits as 1.

int main()
{
    int n;
    cout << "Enter" << endl;
    cin >> n;
    initialize();
    cout << countSetBits(n) << endl;
    return 0;
}