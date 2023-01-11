#include<bits/stdc++.h>
using namespace std;

void luckyNumber(int x) {
    while(x != 0) {
        int digit = x % 10;
        if(digit == 7) {
            cout << "Yes" << endl;
            return;
        }
        x /= 10;
    }
    cout << "No" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        luckyNumber(x);
    }
return 0;
}