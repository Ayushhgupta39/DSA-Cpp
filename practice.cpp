#include <bits/stdc++.h>
using namespace std;

bool hasGroupsSizeX(vector<int> &deck)
{
    sort(deck.begin(), deck.end());
    int size = deck.size();
    int n = deck[size-1];
    vector<int> freq(n+1);
    for(int i=0; i<deck.size(); i++) {
        freq[deck[i]]++;
    }
    for(int i=1 ; i<freq.size()-1; i++) {
        if(freq[i] != freq[i+1] && freq[i] != 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr(8);
    for(int i=0; i<8; i++) {
        cin >> arr[i];
    }
    cout << hasGroupsSizeX(arr) << endl;
    return 0;
}