#include<iostream>
using namespace std;

int sum(int a, int b){
    int c=a+b;
    return c;   
}

int main(){
    // ******Call by value and Call by reference*******
    cout<<"The sum of 4 and 5 is "<<sum(4,5);


    return 0;
}
