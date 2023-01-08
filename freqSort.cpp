#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n; 
	    cin >> n;
	    int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    int maxN = INT_MIN;
	    for(int i=0; i<n; i++)
	    {
	        maxN = max(maxN, arr[i]);
	    }
	    
	    int freq[60] = {0};
	    for(int i=0; i<n; i++)
	    {
	        freq[arr[i]]++;
	    }

        for(int i=0; i<n-1; i++)
        {
            for(int j=i; j<n; j++)
            {
                if(freq[arr[i]] > freq[arr[j]])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        for(int i=0; i<n-1; i++)
        {
            for(int j=i; j<n; j++)
            {
                if(arr[i] > arr[j] && freq[arr[i]] == freq[arr[j]])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
	    
	}
	return 0;
}