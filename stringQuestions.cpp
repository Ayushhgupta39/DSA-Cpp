#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string str = "asdjfnlkfnlksdajfkjl";
    // cout << 'a' - 'A';

    //convert into uppercase

    // for ( int i=0; i<str.size(); i++){
    //     if( str[i] >= 'a' && str[i] <= 'z' )
    //     {
    //         str[i] -= 32;
    //     }
    // }

    // cout << str <<endl;

    // Convert to lowercase

    // string a = "GKANSGKLNLK";
    
    // for ( int i=0; i<a.size(); i++ ){
    //     if ( a[i] >= 'A' && a[i] <= 'Z' ){
    //         a[i] += 32;
    //     }
    // }

    // cout << a << endl;

    // string s = "sflkjgsjkgb";
    
    // transform(s.begin(), s.end(), s.begin(), :: toupper); 

    // cout << s <<endl;

    // transform(s.begin(), s.end(), s.begin(), :: tolower);

    // cout << s <<endl;
    
    // string str = "21525616313";

    // sort(str.begin(), str.end(), greater<int>());

    // cout << str <<endl;
    
    string s= "flskgjnasjg";
    int freq[26];

    for ( int i=0; i<26; i++ ){
        freq[i] = 0;
    }

    for (int i=0; i<s.size(); i++){
        freq[s[i]-'a']++ ;
    }

    char ans = 'a';
    int maxF = 0;

    for ( int i=0; i<26; i++ ){
        if(freq[i] > maxF){
            maxF = freq[i];
            ans = i+'i';
        }
    }
    
    cout << maxF <<" " << ans <<endl; 
    return 0;
}