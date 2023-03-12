// Rope cutting Problem

// Maximum Number of pieces that can be cut having length a/b/c from the rope having length n

#include <bits/stdc++.h>
using namespace std;

int maxPieces(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }
    int res = max({maxPieces((n - a), a, b, c), maxPieces((n - b), a, b, c), maxPieces((n - c), a, b, c)});
    if (res == -1)
    {
        return -1;
    }
    return (res + 1);
}

int main()
{
    int n, a, b, c;
    cout << "Enter" << endl;
    cin >> n >> a >> b >> c;
    cout << maxPieces(n, a, b, c) << endl;
    return 0;
}