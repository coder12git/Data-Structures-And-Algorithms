// Finding power set using Bitwise Operations.

#include <bits/stdc++.h>
using namespace std;

void powerSets(string s, int l)
{
    int pow = (1 << l);
    for (int i = 0; i < pow; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if ((i & (1 << j)) != 0)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }
}

int main()
{
    string s = "abcd";
    powerSets(s, s.length());
    return 0;
}

// Time Complexity - theta(n*(2^n))
// Auxiliary Space - Constant