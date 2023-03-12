// Subsets and subsequences are same
// Subsequences -> Removing one or more than one character from the string but keeping the order same.

// Concept
// If we know the number of subsets for string having length (n-1), then we can find the number of subsets for the same string of length (n)

#include <bits/stdc++.h>
using namespace std;

void printSubsets(string s, string curr = " ", int i = 0)
{
    if (i == s.length())
    {
        cout << curr << " ";
        return;
    }
    printSubsets(s, curr, i + 1);
    printSubsets(s, curr + s[i], i + 1);
}

int main()
{
    string s;
    cout << "Enter" << endl;
    cin >> s;
    printSubsets(s);

    return 0;
}