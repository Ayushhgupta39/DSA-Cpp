#include<bits/stdc++.h>
using namespace std;

int divisible(int n, int a , int b)
{
    int c1 = n/a; // No's divisible by a
    int c2 = n/b; // No's divisible by b
    int c3 = n/(a*b); //No's divisibe by both a and b

    return (c1+c2) - c3;
}

int gcd(int a, int b)
{
    while(b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    // cout << divisible(n, 5,7);
    cout << gcd(3,4);
    return 0;

}