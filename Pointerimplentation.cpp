#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b; 
    *b= temp;
}

int main(){ 
    int a=4;
    int b=3;
    
    
    swap(&a, &b);

    cout << a << " " << b << endl;
  
    return 0;
}

// WITHOUT POINTERS THE VALUES WILL NOT BE SWAPED