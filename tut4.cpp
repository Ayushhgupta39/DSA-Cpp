#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    // //***Constants in C++****
    // int a = 69;
    // cout<<"The value of a is "<<a<<endl;
    // a = 34;
    // cout<<"The new value of a is "<<a;
int a=12, b=25, c=39871;
cout<<"The value of a without setwis "<<a<<endl;
cout<<"The value of b without setwis "<<b<<endl;
cout<<"The value of c without setwis "<<c<<endl;


cout<<"The value of a with setwis "<<setw(14)<<a<<endl;
cout<<"The value of b with setwis "<<setw(14)<<b<<endl;
cout<<"The value of c with setwis "<<setw(14)<<c<<endl;
    return 0;
}   