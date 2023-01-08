#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }

        int sum = 0; int finalSum = 0;

        for(int i=0; i<n; i++) {
            
                
            for(int j=i; j<=n; j++) {
                sum = 0;
                for(int k=i; k<j; k++) {
                    sum += arr[k];
                    
                    if(sum < 0) {
                        sum = 0;
                        break;
                    }
                    
                }
                
                finalSum += sum;
                
            }
            
        }

        
        cout << "Case #" << tc << ": " << finalSum << endl;
    }
return 0;
}