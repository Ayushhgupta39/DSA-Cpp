#include<bits/stdc++.h>
using namespace std;

//**First repeating element**
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     return 0;
// }

//***Sub-Array with Given Sum***
int main(){
    int n; int sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int curr=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            curr += a[j];
            if(curr==sum){
                cout<<a[j]<<" ";
                break;
            }
        }
        
    }
    return 0;
}