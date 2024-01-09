#include <bits/stdc++.h>
using namespace std;

/*
    @brief: Find the reverse of a number and compare it with original number.
    Time complexity : O(digits in a number).
    Auxillary space : O(1).
*/

int main()
{
    int n;
    cin >> n;
    int cpy = n;
    string a = to_string(cpy);
    reverse(a.begin(), a.end());
    cpy = stoi(a);
    if (n == cpy)
        cout << "Is palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;
}