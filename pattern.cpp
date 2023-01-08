#include<iostream>
using namespace std;

int main(){
    // int n;
    // cin >> n;
    // int i=1;
    // while(i<=n) {
    //     int j=1;
    //     while(j<=n) {
    //         cout << "*" << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    int row, col;
    cin >> row >> col;

    // for(int i=1; i<=row; i++) {
    //     for(int j=1; j<=col; j++) {
    //         cout << col-j << " ";
    //     }
    //     cout << endl;
    // }

    // int i=1; int count = 1;
    // while(i <= row) {
    //     int j=1;
    //     while(j <= i) {
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i = i+1;
    // }

    // int i=0;
    // while(i <= row) {
    //     int j=0;
    //     while(j < i) {
    //         cout << i - j << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


    // AAA 
    // BBB
    // CCC 
    // int i = 1;
    // while(i <= row) {
    //     int j = 1;
    //     while(j <= row) {
    //         char ch = 'A' + i - 1;
    //         cout << ch << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // ABC
    // ABC 
    // ABC 
    // int i=1;
    // while(i <= row) {
    //     int j=1;
    //     while(j <= row) {
    //         char ch = 'A' + j - 1;
    //         cout << ch << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


    // ABC 
    // DEF 
    // GHI 
    // int i=1; int count = 1;
    // while(i <= row) {
    //     int j=1;
    //     while(j <= row) {
    //         char ch = 'A' + count - 1;
    //         cout << ch << " ";
    //         j++; count++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // ABC 
    // BCD 
    // CDE
    int i=1;
    while(i <= row) {
        int j=1;
        while(j <= row) {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++; 
    }

    // int i=1;
    // while(i <= row) {

    //     // Print Spaces
    //     int space = row - i;
    //     while(space != 0) {
    //         cout << " ";
    //         space = space - 1;
    //     }

    //     // Print 1st Triangle
    //     int j = 1;
    //     while(j <= row) {
    //         cout << j;
    //         j++;
    //     }
    //     cout << endl;
    // }
    return 0;
}