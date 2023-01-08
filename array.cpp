#include<iostream>
#include<math.h>
using namespace std;

int main(){
    // int array[5]={10,20,30,40};
    // array[4]={50};
    // cout<<array[3]<<endl;
    // cout<<array[4];

    //Taking inputs from the user
   int n;
   int array[n];
   cin>>n;
   for(int i=1; i<n; i++){
       cin>>array[i];
   }
   for(int i=1; i<n; i++){
       cout<<array[i]<<" ";
   }
    
    return 0;
}