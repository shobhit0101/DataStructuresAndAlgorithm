#include <bits/stdc++.h>
using namespace std;

/*
    @brief: Find the factorial of a number.
     5
     5.4.3.2.1

     recursive
     Time Complexity:O(n)
     Space Complexity:O(n)

     Iterative
     Time Complexity:O(n)
     Space Complexity:O(1)

4
*/

int factorial_rec(int n)
{
    if (n == 0)
        return 1;
    return n * factorial_rec(n - 1);
}
int factorial_itr(int n)
{
    int a = 1;
    for (int i = n; i >= 1; i--)
    {
        a *= i;
    }
    return a;
}
int main()
{
    int n;
    cin >> n;
    // cout << factorial_itr(n) << endl;4
    cout << factorial_rec(n) << endl;
}
