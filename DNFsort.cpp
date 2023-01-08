#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void dnfSort(int arr[], int n)
{
    int low = 0; int mid = 0; int high = n-1;
    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr, mid, low);
            low++; mid++;
        }
        if(arr[mid] == 1)
        {
            mid++;
        }
        if(arr[mid] == 2)
        {
            swap(arr, mid, high);
            high--;
        }

    }
}

int main()
{
    int arr[] = {2,0,2,1,1,0};

    dnfSort(arr,6);

    for(int i=0; i<9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}