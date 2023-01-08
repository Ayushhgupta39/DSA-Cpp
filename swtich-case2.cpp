//APPLICATOIN OF SWTICH CASE STATEMENT
//******* SIMPLE CALCULATOR******
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter a operator";
    char op;
    cin>>op;
    switch(op){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
       break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;
        default:
        cout<<"Invalid operator, Please run the program again";
        break;
    }

    return 0;
}