#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1,2,3,-2,5};
    int curr = 0; int maxTillNow = INT_MIN;
    for(int i=0; i<5; i++)
    {
        if(curr < 0)
        {
            curr = 0;
        }
        curr += arr[i];
        maxTillNow = max(maxTillNow, curr);
    }

    cout << maxTillNow << endl;
return 0;
}