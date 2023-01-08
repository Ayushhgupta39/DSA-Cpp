#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int product = 1; int sum = 0;
        for(int i=0; i<n; i++)
        {
           
            for(int j=i; j<n; j++)
            {
                product = 1;
                for(int k=i; k<=j; k++)
                {
                    
                    // cout << arr[k] << " ";
                    product *= arr[k];
                    
                }
                // cout << endl;
                sum += product;
            }
           
        }
        cout << sum << endl;
    }
    
    return 0;
}