#include<iostream>
#include<climits>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    int maxNO=INT_MIN;
    int minNO=INT_MAX;

    for(int i=0; i<n; i++){
        if(array[i]>maxNO){
            maxNO=array[i];
        }
    }
    for(int i=0; i<n; i++){
        if(array[i]<minNO){
            minNO=array[i];
        }
    }

    cout<<"Maximum Number is "<<maxNO<<endl;
    cout<<"Minimum Number is "<<minNO<<endl;
    return 0;
}