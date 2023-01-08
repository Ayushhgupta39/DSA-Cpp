#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
    return sum;
}

int main(){
    // cout<<"Enter Number : "<<endl;
    int n;
    cin>>n;
    cout<< sum(n);
    return 0;
}