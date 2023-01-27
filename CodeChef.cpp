#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ones = 0;
        for (auto i : s)
        {
            if (i == '1')
            {
                ones++;
            }
        }

        if (s == "1" || s == "10")
        {
            cout << "No" << endl;
        }
        else
        {
            if (ones <= 3)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}