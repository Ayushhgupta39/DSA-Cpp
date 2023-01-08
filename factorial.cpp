#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    int fact=1;
    for(int i=n; i>=1; i--){
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}