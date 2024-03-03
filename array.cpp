#include<bits/stdc++.h>
using namespace std;

int findMax(int arr[], int size) {
    int maxNum = INT_MIN;
    for (int i=0; i<size; i++) {
        maxNum = max(maxNum, arr[i]);
    }
    return maxNum;
}

int findMin(int arr[], int size) {
    int minNum = INT_MAX;
    for (int i=0; i<size; i++) {
        minNum = min(minNum, arr[i]);
    }
    return minNum;
}

void arraySum(int arr[], int size) {
    int sum = 0;
    for (int i=0; i<size; i++) {
        sum += arr[i];
    }
    cout << sum << endl;
}

void linearSearch(int arr[], int size, int elem) {
    for (int i=0; i<size; i++) {
        if (arr[i] == elem) {
            cout << "Element found at: " << i << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}

int main() {
    int arr[5] = {3,5,6,7,1};
    cout << findMax(arr, 5) << endl;
    cout << findMin(arr, 5) << endl;
    arraySum(arr, 5);
    linearSearch(arr, 5, 6);
    linearSearch(arr, 5, 9);
    return 0;
}