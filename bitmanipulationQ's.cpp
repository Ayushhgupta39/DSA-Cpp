#include<bits/stdc++.h>
using namespace std;

// To check if a number is power of 2
bool ispowerof2(int n)
{
    return !(n & n-1);
}

// To count the number of ones in binary representation of a number
int numberofones( int n )
{
    int count = 0; 
    while(n) // means while (n != 0)
    {
        n = n & (n-1);
        count++;
    }
    return count;
}
// To get all the subsets of an Array
void allpossiblesubsets(int arr[], int n)
{
    for(int i=0; i < (1<<n) ; i++)
    {
        for(int j=0; j<n; j++)
        {
            if( i & (i<<j)){
                cout << arr[j] << " ";
            }
            cout << endl;
        }
    }
}
int main(){
    int n;
    cin >> n;

    int arr[n] = {1,2,3,5};
    cout << ispowerof2(4);
    // cout << numberofones(n); // 19 has 3 1's
    // cout << allpossiblesubsets(arr, n) << endl;
return 0;
}



