#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int b=n;
    int count =0;
    while(b!=0){
        b=b/10;
        count=count +1;

    }
    int a=n;
    int sum=0;
    while(a!=0)
    {   
        int digit=a%10;
        sum=sum+pow(digit,count);
        a=a/10;
    
     }
    if(sum==n){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }
    return 0;
}