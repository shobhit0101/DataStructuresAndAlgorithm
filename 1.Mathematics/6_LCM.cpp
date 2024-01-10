#include <bits/stdc++.h>
using namespace std;

/*
    @brief: lcm is based on the fact that lcm(a,b)*gcd(a,b) = a*b
    // Time complexity : O(log(min(a,b)))
    // space complexity : O(log(min(a,b)))
*/
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b);
}