#include<bits/stdc++.h>
using namespace std;

void reverseString(string s) {
    stack<char> st;
    for(int i=0; i<s.length(); i++) {
        st.push(s[i]);
    }

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }

    cout << endl;
}

int main(){
    string s = "Assassin's creed is a great game";
    reverseString(s);
return 0;
}