// Josephus Problem
// There are (n) persons in a circle, and our task is to kill every Kth person from that circle
// And Find the safe position i.e the position where the person will be not killed.

// -- Rules --
// We will take the first person position as 0
// After killing the Kth person starting from 0, the next counting from 1 should be start from the next person after the person that has been killed

#include <bits/stdc++.h>
using namespace std;

int jos(int n, int k)
{
    if (n == 1)
    {
        return 0;
    }

    return ((jos((n - 1), k) + k) % n);
}

int main()
{
    int n, k;
    cout << "Enter" << endl;
    cin >> n >> k;
    cout << "The person at position " << jos(n, k) << " starting from 0 which is actually " << jos(n, k) + 1
         << " position, if we start the position counting from 1." << endl;
    return 0;
}

// Time Complexity - theta(n)