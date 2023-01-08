#include<bits/stdc++.h>
using namespace std;

void test(){
    int n;
    cin >> n;
    vector <int> visitors(n);
    for(int i=0; i<n; i++)
    {
        cin >> visitors[i];
    }

    int maxVisitors = INT_MIN; int count = 0;
    for(int i=0; i<n; i++)
    {
        if(i == (n-1))
        {
            if(visitors[i] > maxVisitors && visitors[i] > visitors[i-1])
            {
                count++;
                maxVisitors = visitors[i];
            }
        }
        else if(i == 0)
        {
            if(visitors[i] > visitors[i+1])
            {
                count++;
            }
        }
        else{
            if(visitors[i] > maxVisitors && visitors[i] > visitors[i+1] && visitors[i] > visitors[i-1])
            {
                count++;
                maxVisitors = visitors[i];
            }
        }
    }
    cout << count << endl;
}


int main(){
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cout << "Case #" << i << ": ";
        test();
    }
}