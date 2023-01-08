#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3] = {3,4,5};
    for(int i=0; i<3; i++)
    {
        if(i==0)
        {
            a[i] = a[2];
        }

        int temp = a[i-1];
        a[i+1] = a[i];  
        a[i] =
    }
return 0;
}