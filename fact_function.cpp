#include<iostream>
#include<math.h>
using namespace std;

int fact(int num1){
    if(num1==1 || num1 == 0){
        return 1;
    }
    else{
        return num1*fact(num1-1);
    }
}

int main(){
    cout<<"Enter a Number : "<<endl;
    int n;
    cin>>n;
    cout<<fact(n);

    return 0;
}