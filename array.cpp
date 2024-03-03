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

int main() {
    int arr[5] = {3,5,6,7,1};
    cout << findMax(arr, 5) << endl;
    cout << findMin(arr, 5) << endl;
    arraySum(arr, 5);
    return 0;
}