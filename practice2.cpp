#include<bits/stdc++.h>
using namespace std;

int main(){
    long long base;
    cin >> base;
    long long squares;
    // Odd
    //     if(base % 2 != 0)
    //     {
    //         long long n = base/2;
    //         squares = (n*(n+1))/2;
    //     }
    // // Even
    //     else{
    //         long long n = (base/2) - 1;
    //         squares = (n*(n+1))/2;
    //     }

        long long n = (base/2)-1;
        squares = (n*(n+1))/2;
        
        cout << squares;
return 0;
}