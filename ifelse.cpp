#include <iostream>
using namespace std;

// int main(){
//     int a,b,c;
//     cout<<"Enter Three values"<<endl;
//     cout<<"Enter first value"<<endl;
//     cin>>a;
//     cout<<"Enter second value"<<endl;
//     cin>>b;
//     cout<<"Enter Third value"<<endl;
//     cin>>c;
//     if(a>b){
//         if(a>c){
//             cout<<"The largest value is"<<a;
//         }
//         else{
//             cout<<"The largest value is "<<c;
//         }
//     }
//     else if(b>a){

//         if(b>c){
//             cout<<"The largest value is "<<b;
//         }
//         else{
//             cout<<"The largest value is "<<c;
//         }
//         return 0;
    
        
    

//     }
//     }
int main(){
    //TO CHECK IF THE NUMBER IS ODD OR EVEN
    int a;
    cout<<"Enter any number"<<endl;
    cin>>a;
    if(a%2==0){
        cout<<"The number is even";
    }
    else if(a==0){
        cout<<"The number is neither odd nor even";
    }

    else{
        cout<<"The number is odd";
    }
    
    return 0;

}