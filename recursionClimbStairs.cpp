#include<bits/stdc++.h>
using namespace std;

int countMethodstoClimb(int n) {
    if(n < 0) {
        return 0;
    }
    if(n == 0) {
        return 1;
    }

    return n + countMethodstoClimb(n-1) + countMethodstoClimb(n-2);
}

int main() {

    // n is the number of stairs
    int n;
    cin >> n;

    cout << countMethodstoClimb(n) << endl;
    return 0;
}