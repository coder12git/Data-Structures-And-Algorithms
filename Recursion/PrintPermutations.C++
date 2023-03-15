// Task is to print all the permutations of the given string

// ---- NOTE ----
// The number of permutations of the given string of length (n) is n!

#include <bits/stdc++.h>
using namespace std;

void printPermutations(string s, int n, int i = 0)
{
    if (i == (n - 1))
    {
        cout << s << " ";
        return;
    }
    else
    {
        for (int k = i; k <= (n - 1); k++)
        {
            swap(s[i], s[k]);

            printPermutations(s, n, (i + 1));

            // Restore the original String;
            swap(s[i], s[k]);
        }
    }
}

int main()
{
    string s;
    cout << "Enter the string" << endl;
    cin >> s;
    printPermutations(s, s.length());
    return 0;
}