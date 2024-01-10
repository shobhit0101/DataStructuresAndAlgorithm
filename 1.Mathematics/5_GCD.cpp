#include <bits/stdc++.h>
using namespace std;

/*
    GCD of two numbers is the greatest number that divides both A , B.
    We can find GCD of two numbers using two approach
    1. Euclidean Approach (fastest)
        based on GCD(A,B) = GCD(B,A-B) or GCD(B,R) where R is the remainder A%B
        and GCD(A,0) = A
    2. Prime  factorisation

*/

//         Time Complexity: O(log(min(a,b)))
//         Space Complexity: O(log(min(a,b)))
int euclid_GCD_rec(int a, int b)
{
    if (b == 0)
        return a;
    else
        return euclid_GCD(b, a % b);
}

//         Time Complexity: O(log(min(a,b)))
//         Space Complexity: O(1)
int euclid_GCD_itr(int a, int b)
{
    while (b != 0)
    {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

void prime_factors(int num, vector<int> &v)
{
    int c = 2;
    while (num > 1)
    {
        if (num % c == 0)
        {
            v.push_back(c);
            num /= c;
        }
        else
            c++;
    }
}

//        Time Complexity: O(sqrt(n)log(n))
//        Space Complexity: O(sqrt(n))
int prime_factors_GCD(int a, int b)
{
    vector<int> v1;
    vector<int> v2;

    prime_factors(a, v1);
    prime_factors(b, v2);

    vector<int> common_pf;
    for (int factor : v1)
    {
        if (find(v2.begin(), v2.end(), factor) != v2.end())
        {
            common_pf.push_back(factor);
            v2.erase(find(v2.begin(), v2.end(), factor));
        }
    }

    int ans = 1;
    for (int factor : common_pf)
    {
        ans *= factor;
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    // cout << euclid_GCD_rec(a, b);
    cout << prime_factors_GCD(a, b);
}