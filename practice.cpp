#include <bits/stdc++.h>
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i+1)
        {
            ans.push_back(arr[i]);
        }
    }
    
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    valueEqualToIndex(arr, n);
    return 0;
}