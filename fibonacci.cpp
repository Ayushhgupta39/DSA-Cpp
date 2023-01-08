#include<iostream>
#include<math.h>
using namespace std;

void fibo(int n){
    int t1; int t2; int nextterm;
    t1=0;
    t2=1;
    for(int i=1; i<= n; i++){
        cout<<t1<<" ";
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    fibo(n);
    return 0;
}