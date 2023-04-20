#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    s.push(2);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    cout << s.top() << endl;
    s.pop();
    cout << "Top after pop: " << s.top() << endl;
    cout << "Size: " << s.size() << endl;
    cout << "Is the stack empty: " << s.empty() << endl;
    return 0;
}