#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for( int i=0; i<n; i++){
        cin>>arr[i];

    }
    cout << endl;
    for( int i=0 ; i<n; i++){
        if(arr[i]<38){
            cout<<arr[i]<<endl;
        }
        else{
            int temp=arr[i];
            while(temp%5 != 0){
                temp++;
            }
            int diff = temp - arr[i];
            if(diff<3){
                arr[i] = arr[i] + diff;
            }
        cout<< arr[i]<< endl;
        }
        

    }
    return 0;
}