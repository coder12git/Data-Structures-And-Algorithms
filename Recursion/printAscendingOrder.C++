#include <bits/stdc++.h>
using namespace std;

// Converting non-tail recursive to tail-recursive
void printAscendingOrder(int n, int k)
{
    if (n == 0)
    {
        return;
    }
    cout << k << ' ';
    printAscendingOrder((n - 1), (k + 1));
}

int main()
{
    int n;
    cout << "Enter" << endl;
    cin >> n;
    printAscendingOrder(n, 1);
    cout << endl;
    return 0;
}