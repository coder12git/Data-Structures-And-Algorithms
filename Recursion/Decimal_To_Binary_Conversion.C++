#include <bits/stdC++.h>
using namespace std;

// Recursive function to convert decimal to binary
void decToBinary(int n)
{
    if (n == 0)
    {
        return;
    }
    decToBinary(n / 2);
    cout << (n % 2);
}

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    decToBinary(n);
    cout << endl;
    return 0;
}

// Time Complexity - O(log(n))
// Auxiliary Space - O(log(n))