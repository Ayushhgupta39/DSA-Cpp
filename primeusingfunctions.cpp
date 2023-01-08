#include<iostream>
#include<math.h>
using namespace std;

int isprime(int num1){
    bool flag=0;
    for(int i=2; i<=(num1-1); i++){
        if(num1%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){
    cout<<"Enter The Range : "<<endl;
    int a,b;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
    
    return 0;
}