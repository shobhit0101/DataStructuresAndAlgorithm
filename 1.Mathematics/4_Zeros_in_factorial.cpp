#include <bits/stdc++.h>
using namespace std;

/*
    @brief : zeros in factorial are the number of multiples of 5 in the factorial of n.
    Time Complexity: O(log5(n))
    Space Complexity: O(1)
*/
int trailing_zero(int n)
{
    int ans = 0;
    for (int i = 5; i <= n; i *= 5)
    {
        int cpy = n;
        if (cpy / i != 0)
        {
            ans += cpy / i;
        }
        else
            break;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << trailing_zero(n) << endl;
}