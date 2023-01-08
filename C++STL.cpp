#include<bits/stdc++.h>
using namespace std;

int main(){
    // Array STL

    // array<int,4> a = {1,2,3,4};

    // int size = a.size();
    // for(int i=0; i<size; i++)
    // {
    //     cout << a[i] << endl;
    // }

    // cout << a.empty() << endl;
    // cout << a.front() << endl;
    // cout << a.back() << endl;

    // -----------Deque-----------
    
    
    // deque <int> d;
    // d.push_back(1); // Inserts from back
    // d.push_front(2); // Inserts from front
    // d.push_front(3);
    // d.pop_back(); // Deletes from back
    // d.pop_front(); // Deletes from front
    // d.push_front(3);
    // d.push_back(1);
    // for(auto i:d)
    // {
    //     cout << i << " ";
    // }
    // cout << "First Index element" << d.at(1);
    
    // ------ List STL ------
    // list <int> l;

    // l.push_back(1);
    // l.push_front(2);
    // for(auto i:l)
    // {
    //     cout << i << " ";
    // }

    // l.erase(l.begin()); // Removes element one by one from the start    
    // for(auto i:l)
    // {
    //     cout << i << " ";
    // }


    // ---- Stack STL ----
    // stack<string> s;
    // s.push("Ayush");
    // s.push("Gupta");
    // s.push("Hello");
    // cout << s.top() << endl; 
    // s.pop();
    // cout << s.top() << endl;

    // ----Queue----
    // queue <string> q;
    // q.push("Ayush");
    // q.push("Gupta");
    // q.push("Hello");
    // cout << q.front();
    // q.pop();
    // cout << q.front();
    

    // --- Priority Queue---
    // Max heap
    // priority_queue<int> maxi;

    // // min_head
    // priority_queue<int, vector<int>, greater<int> > mini;

    // maxi.push(1);
    // maxi.push(2);
    // maxi.push(3);
    // maxi.push(0);
    // for(int i=0; i<maxi.size(); i++)
    // {
    //     cout << maxi.top() << " " ;
    //     maxi.pop();
    // }

    //---Sets STL---
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    for(auto i:s)
    {
        cout << i << " ";
    }
    cout << s.count(5) << endl; // Checks if 5 is present or not
    set<int>:: iterator itr = s.find(1);
    cout << "Value present at itr = " << *itr << endl;
return 0;
}