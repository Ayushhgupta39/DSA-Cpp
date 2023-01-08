#include<iostream>
using namespace std;

int main(){
     char button;
    cout<<"Press any button\n";
    cin>>button;
    // cin>>button;
    // if(button=='a'){
    //     cout<<"Namaste"<<endl;

    // }
    // else if(button=='b'){
    //     cout<<"Hello"<<endl;
    // }
    // else if(button=='c'){
    //     cout<<"Hola"<<endl;
    // }
    // else if(button=='d'){
    //     cout<<"Salut"<<endl;
    // }
    // else if(button=='e'){
    //     cout<<"Ciao"<<endl;
    // }
    // else{
    //     cout<<"Please choose between a to e";
    // }

    switch (button)
    {
    case 'a':
        cout<<"Namaste";
        break;
    case 'b':
        cout<<"Hello";
        break;
    case 'c' :
    cout<<"Hola";
    break;
    case 'd':
    cout<<"Salut";
    break;
    case 'e':
    cout<<"Ciao";
    break; 

    
    default:
    cout<<"I am sill learning";
        break;
    }
    return 0;
}