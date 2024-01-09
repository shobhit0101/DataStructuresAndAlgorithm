#include <bits/stdc++.h>
using namespace std;

// using formula
// @brief the most efficient way to count the digits in a number.
// Time complexity : O(1).
// Auxillary space : O(1).
int main()
{
    int n;
    cin >> n;
    int x = floor(log10(n)) + 1;
    cout << x << endl;
}

// using loops
// int main()
// {
//     int n;
//     cin >> n;
//     int count = 0;
//     while (n != 0)
//     {
//         n = n / 10;
//         count++;
//     }
//     cout << count << endl;
// }
