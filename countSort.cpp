#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n)
{
    int maxN = INT_MIN;
    for(int i=0; i<n; i++)
    {
        maxN = max(maxN, arr[i]);
    }  

    int freq[10] = {0};
    for(int i=0; i<n; i++)
    {
        freq[arr[i]]++;
    }

    for(int i=1; i<=maxN; i++)
    {
        freq[i] += freq[i-1];
    }

    int sortArr[n];
    for(int i=n-1; i>=0; i--)
    {
        sortArr[--freq[arr[i]]] = arr[i];
    }

    for(int i=0; i<n; i++)
    {
        arr[i] = sortArr[i];
    }
}

int main()
{
    int n; 
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    countSort(arr, n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}