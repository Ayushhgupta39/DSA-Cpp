#include<bits/stdc++.h>
using namespace std;

// Linear Search using Recursion
bool linearSearchwithRecursion(int arr[], int n, int element) {
    if(n == 0) {
        return false;
    }
    if(arr[0] == element) {
        return true;
    }

    return linearSearchwithRecursion(arr+1, n-1, element);
}

// Binary Search with Recursion
bool binarySearch(int *arr, int s, int e , int k ) {

    //base case

    //element not found
    if(s>e)
        return false;

    int mid = s + (e-s)/2;

    //element found
    if(arr[mid] == k)
        return true;

    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}



// Find the sum of an array using Recursion
int arraySum(int arr[], int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return arr[0];
    }

    return arr[0] + arraySum(arr+1, n-1);
}


// Check if the array is Sorted or not using Recursion
bool isSorted(int arr[], int n) {
    if(n == 1 || n == 0) {
        return true;
    }
    if(arr[0] > arr[1]) {
        return false;
    }

    return isSorted(arr+1, n-1);
}

int main(){
    int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
    int size = 11;
    int key = 223;

    // cout << isSorted(arr, 5) << endl;

    // cout << arraySum(arr, 5) << endl;

    // cout << linearSearchwithRecursion(arr,5,8) << endl;

    cout << binarySearch(arr, 0, size-1, key) << endl;
return 0;
}