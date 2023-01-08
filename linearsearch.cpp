#include<iostream>
#include<math.h>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
        
    }
    return -1;
}

int main(){
    cout<<"Enter Number of terms: "<<endl;
    int n;
    cin>>n;

    int arr[n];
    cout<<"Enter the Terms: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the value to be searched: "<<endl;
    int key;
    cin>>key;

    int a = linearSearch( arr, n , key);
    printf("%d",a);
    return 0;
}