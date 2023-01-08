#include<bits/stdc++.h>
using namespace std;

/*int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin >> arr;
    bool check=1;

    for(int i=0; i<n; i++){
        if(arr[i] != arr[n-1-i]){
            check=0;
            break;
        }
    }

    if(check==true){
        cout<< "Palindrome"<<endl;
    }
    else{
        cout<< "Not Palindrome" << endl;
    }
    return 0;
}*/

//Largest word in a sentence

int main(){
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();

    int i=0;
    int currLen=0; int maxLen=0;

    while(1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(currLen > maxLen ){
                maxLen = currLen;
            }
            currLen = 0;
        }
        else
        currLen++;
        if(arr[i] == '\0'){
            break;

        }
        i++;


    }
    return 0;
}