#include <bits/stdc++.h>
using namespace std;

void checkPalindrome(string s, int start, int end)
{
    if (start >= end)
    {
        cout << "Yes" << endl;
    }
    else
    {
        if (s[start] == s[end])
        {
            checkPalindrome(s, (start + 1), (end - 1));
        }
        else
        {
            cout << "No" << endl;
        }
    }
}

int main()
{
    string s;
    cout << "Enter" << endl;
    cin >> s;

    int n = s.length();

    checkPalindrome(s, 0, (n - 1));

    return 0;
}