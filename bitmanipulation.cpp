#include<bits/stdc++.h>
using namespace std;

// Get Bit

// int getBit(int n, int pos)
// {
//     return (n & (1<<pos) !=0);
// }

// int main()
// {
//     cout << getBit(11011,3) <<endl;
// }

// Set Bit 

// int setBit(int n, int pos)
// {
//     return (n | (1<<pos));
// }

// int main()
// {
//     cout << setBit(5,1) << endl;
// }

// Clear bit

int clearBit(int n, int pos)
{
    int mask = ~(1<<pos);
    return (n & mask) ;
}

int Updatebit(int n , int pos, int value)
{
    int mask = ~(1<<pos);
    n = (n&mask);

    return (n | (value<<pos));



}
// int main()
// {
//     // cout <<clearBit(5,2) <<endl;
//     cout << Updatebit(5,1,1);
// }