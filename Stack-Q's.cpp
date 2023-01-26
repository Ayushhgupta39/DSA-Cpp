#include<bits/stdc++.h>
using namespace std;

// Delete Middle element of a Stack
void deleteMiddleFromStack(stack<int> &s, int size) {
    int middle = size/2;
    stack<int> st;
    int count = 0;
    while(count < middle) {
        st.push(s.top());
        s.pop();
        count++;
    }

    s.pop();
    while(!st.empty()) {
        s.push(st.top());
        st.pop();
    }
}

// Reverse a String using Stack
void reverseString(string s) {
    stack<char> st;
    for(int i=0; i<s.length(); i++) {
        st.push(s[i]);
    }

    string ans = "";

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    cout << ans;
}

int main(){

    // Reverse a String using Stack
    string s = "Assassin's creed is a great game";
    // reverseString(s);

    // Delete Middle element of a Stack
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    deleteMiddleFromStack(st,st.size());
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }


return 0;
}