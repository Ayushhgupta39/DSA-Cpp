#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int tc = 1; tc <= t; tc++)
    {
        int n;
        cin >> n;
        vector<int> a (n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int k;
        cin >> k;
        vector<int> b(k);
        for(int i=0; i<k; i++)
        {
            cin >> b[i];
        }

        map<int,int> freq;
        for(int i=0; i<b.size(); i++)
        {
            freq[b[i]]++;
        }
        

        for(int i=0; i<a.size(); i++)
        {
            if(freq[a[i]] == 0)
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
        
    }
return 0;
}