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
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
return 0;

}
