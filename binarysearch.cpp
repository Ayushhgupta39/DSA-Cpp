#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    while(s<e){
        int mid=(s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=s+1;
        }
    }
    return -1;
}

int main(){
    
    int n; 
    cin>>n;
    int arr[n];
    cout<<"Enter the values of Array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the key to be found"<<endl;
    int key;
    cin>>key;

    int a = binarysearch( arr, n , key);
    if(a == -1){
        printf("element not found");
    }
    else{
        printf("%d",a);
    }
    return 0;
}