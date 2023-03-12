#include <bits/stdc++.h>
using namespace std;

// The given function is Tail Recursive
// Because the last thing in the function is recursive call
// Tail Recursive function takes less time than non-tail recursive
// Therefore, it's recommended that if we can than we should convert
// non-tail recursive to tail recursive coz it takes less time
// Because in tail recursive the recursive part is considered as non-recursive

void printDescendingOrder(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << ' ';
    printDescendingOrder(n - 1); // n=(n-1)
}

int main()
{
    int n;
    cout << "Enter" << endl;
    cin >> n;
    printDescendingOrder(n);
    return 0;
}