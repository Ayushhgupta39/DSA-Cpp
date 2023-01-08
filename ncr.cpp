//Calculating binary cofficient, i.e. nCr
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
    cout<<"Enter a number :"<<endl;
    int n,r;
    cin>>n>>r;
    int ncr= fact(n)/(fact(r)*fact(n-r));
    cout<<ncr;
    return 0;
}