#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    bool flag=0;
    for(int i=2; i<= sqrt(n); i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime number ";
    }
    else{
        cout<<"Not prime";
    }
    return 0;
}