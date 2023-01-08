#include <bits/stdc++.h>
using namespace std;

// Reverse a string using Recursion
void reverseStringwithRecursion(int i, int j, string &s)
{
    // Base Case
    if (i > j)
    {
        return;
    }

    swap(s[i], s[j]);
    i++;
    j--;
    reverseStringwithRecursion(i, j, s);
}

// Check if a string is Palindrome using Recursion
bool checkPalindrome(string s, int i, int j)
{

    // Base Case
    if (i > j)
    {
        return true;
    }

    if(s[i] != s[j]) {
        return false;
    } else {
        return checkPalindrome(s, i+1, j-1);
    }
}

int main()
{
    string s = "book";
    int i = 0, j = s.length() - 1;

    // reverseStringwithRecursion(i, j, s);
    // cout << s << endl;

    cout << checkPalindrome(s, i, j) << endl;
    return 0;
}