#include <bits/stdc++.h>
using namespace std;

/*
    @brief: we only have to check till sqrt(n), after that it is all redundant

    Time Complexity: O(sqrt(n));
    Space Complexity: O(1);
*/

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int a;
    cin >> a;
    cout << isPrime(a) << endl;
}