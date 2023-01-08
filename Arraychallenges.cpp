#include<bits/stdc++.h>
using namespace std;


//***Maximum till i***
/*int main(){
    int n; 
    cin>>n;
    int arr[n];
    for( int i=0; i<n; i++){
        cin >> arr[i];
    }
    int mx= INT_MIN;
    for(int i=0; i<n; i++){
        mx=max(mx, arr[i]);
    }
    cout<<mx<<endl;
    return 0;
}*/


//***Sum of all Sub-Arrays***
/*int main(){
    int n; cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int current=0;
    for(int i=0; i<n; i++){
        current=0;
        for(int j=i; j<n; j++){
            current += arr[j];
            cout<< current << endl;
        }
    }
    return 0;
}*/


//**Maximum Sub-Array length***
/*int main(){
    int n; 
    cin>>n; 
    int a[n];
    for(int i=0; i<n; i++){
    cin >> a[i];
    }
    int ans=2;
    int pd=a[1]-a[0];
    int j=2;
    int curr=2;
    while(j<n){
        if(pd==a[j]-a[j-1]){
            curr++;
        } 
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
    }
    cout <<ans<< endl;

    return 0;
}*/

//***Record Breaking Day****
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int day=0; int max=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
            day++;
        }
        else if(arr[i]>arr[i+1] && arr[i]>arr[i-1] && arr[i]>=max){
            day++;
        }
        else if(n==1){
            cout << "1";
            return 0;
        }
        
    }
    cout << day <<endl;

    return 0;
}