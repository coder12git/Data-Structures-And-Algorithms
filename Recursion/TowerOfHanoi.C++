// Tower Of Hanoi

// In this problem, we have to find the steps of moves to be taken to move all the disc from Tower A to Tower C keeping B as an auxiliary tower.

// ---- RULES ----
// 1. Only 1 disc moves at a time
// 2. No longer disc above smaller
// 3. Only the top disc of the tower can be moved.

#include <bits/stdc++.h>
using namespace std;

void tow(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << "Move 1 from " << A << " to " << C << endl;
        return;
    }
    tow((n - 1), A, C, B);
    cout << "Move " << n << " from " << A << " to " << C << endl;
    tow((n - 1), B, A, C);
}

int main()
{
    int n;
    cout << "Enter" << endl;
    cin >> n;
    tow(n, 'A', 'B', 'C');
    return 0;
}

// Time complexity - ((2^(n))-1)