#include<iostream>
using namespace std;

int main(){
    int rows, coloumns;
    cout<<"Enter the number of rows "<<endl;
    cin>>rows;
    cout<<"Enter the number of coloumns "<<endl;
    cin>>coloumns;
    for(int i=1; i <=rows; i++){
        for(int j=1; j<=coloumns; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}