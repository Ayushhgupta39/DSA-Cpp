#include <iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter any value"<<endl;
    // cin>>n;
    // while(n>0){
    //     cout<<n<<endl;
    //     cout<<"Enter value"<<endl;
    //     cin>>n;
    // }
    // // DO WHILE LOOP
    // int n;
    // cout<<"Enter any value"<<endl;
    // cin>>n;
    // do{
    //     cout<<n<<endl;
    //     cout<<"Enter value again"<<endl;
    //     cin>>n;
    // }while(n>0);
    //
    for(int i=0;i<=100; i++){
        if(i%3==0){
            continue;
        }
            cout<<i<<" ";
        
    }
     return 0;
}
