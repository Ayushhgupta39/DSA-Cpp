#include<iostream>
using namespace std;

int main(){
    int savings;
    cout<<"Enter your savings";
    cin>>savings;
    if(savings>=5000){
        if(savings>10000){
            cout<<"Shopping with Neha\n";
        }
        else{
            cout<<"Roadtrip with friends ";
        }
        
    }
    else if(savings>2000){
        cout<<"Rashmi";
    }
    else{
        cout<<"Friends";
    }
    return 0;
}