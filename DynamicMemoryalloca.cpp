#include<bits/stdc++.h>
using namespace std;


//Dynamic memory allocation (Heap)
int main(){
    int a = 10;

    int* p = new int(); //Dynamically allocating Memory
    *p = 10;
    cout << *p << endl; // Returns value stored in pointer p

    delete(p); // Memory Deallocation

    cout << *p; // Now, this will return garbage value as we have deallocated the value stored in p.

    p = new int[4]; //Allocating memory for an array of size 4.

    delete[]p;

    p = NULL; //This will remove the pointer so that we don't get a garbage value in our Output. If not done then it may result in serious problems like Memory leaks.

    cout << *p;


    return 0;
}