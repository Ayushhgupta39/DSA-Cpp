#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=10;
    int *b ;

    b=&a;
    // cout << b <<endl;
    // cout << *b << endl; //dereferencing

    *b = 20;
    // cout << a <<endl;
    // cout<<endl;

    int arr[] = {10,20,30};
    // cout << *arr;
    // int *ptr = arr;
    cout << arr << endl;
   for ( int i=0 ; i< 3; i++){
        cout << (arr+i) << endl;
        
    }


    return 0;
}