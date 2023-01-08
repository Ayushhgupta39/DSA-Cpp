#include<bits/stdc++.h>
using namespace std;
int main(){
    // *** Matrix Transpose ***
    // int n;
    // cin >> n;
    // int arr[n][n];

    // for (int i=0; i<n; i++){
    //     for ( int j = 0; j<n; j++ ){
    //         cin >> arr[i][j];
    //     }
    // }

    // for ( int i=0; i<n; i++ ){
    //     for ( int j = i; j<n; j++ ){
    //         int temp = arr[i][j];
    //         arr[i][j] = arr[j][i];
    //         arr[j][i] = temp;
    //     }

    // }

    // for ( int i=0 ; i<n; i++ ){
    //     for ( int j=0; j<n; j++ ){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

//  *** Matrix Multiplication ***
    // *** Matrix Transpose ***
    int n;
    cin >> n;
    int arr[n][n];
    int b[n][n];

    for (int i=0; i<n; i++){
        for ( int j = 0; j<n; j++ ){
            cin >> arr[i][j];
        }
    }

    for (int i=0; i<n; i++){
        for ( int j = 0; j<n; j++ ){
            cin >> b[i][j];
        }
    }



    int a[n][n];
    for ( int i=0; i<n; i++ ){
        for ( int j=0; j<n; j++ ){
            for (int k=0; k<n; k++ ){
                a[i][j] += arr[i][k] * b[k][j];
            }
        }
    }

    for ( int i=0 ; i<n; i++ ){
        for ( int j=0; j<n; j++ ){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    

return 0;
}