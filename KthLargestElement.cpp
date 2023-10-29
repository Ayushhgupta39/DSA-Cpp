#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={5,4,7,10,29,60,31,2};
    int k=2;
    //use min heap
    priority_queue<int,vector<int>,greater<int>>pq;
    int i;
    for(i=0;i<k;i++) pq.push(arr[i]);
    while(i<arr.size()){
        if(pq.top()<arr[i]) {
            pq.pop();
            pq.push(arr[i]);
        }
        i++;
    }
    cout<<pq.top();
}