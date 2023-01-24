#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
        
        int ones = 0; int non_ones = 0; int opFirst = 0;
        for(auto i:arr) {
            if(i == 1) {
                ones++;
            } else {
                non_ones++;
            }
        }

        if(ones%2 == 0) {
            opFirst = ones/2;
        } else {
            opFirst = (ones/2) + 1;
        }

        cout << (n - ones) + opFirst << endl;

    }
return 0;
}