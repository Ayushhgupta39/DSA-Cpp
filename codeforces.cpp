#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        for(int i=0; i<n; i++)
        {
            if(isupper(s[i]) || islower(s[i]))
            {
                cout << "YES" << endl;
            }
           
        }
    }
return 0;
}