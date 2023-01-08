#include<bits/stdc++.h>
using namespace std;

int main(){
    //-----------Creation-----------
    unordered_map<string, int> m;

    //-----------Insertion----------

    // Method 1
    pair <string, int> p = make_pair("babbar", 3);
    m.insert(p);

    // Method 2
    pair <string, int> pair2("love", 2); 
    m.insert(pair2);

    // Method 3
    m["mera"] = 1;

    m["mera"] = 2; //This will update the previous value


    //-----------Searching-----------

    cout << m["mera"] << endl;
    cout << m.at("babbar") << endl;

    // cout << m.at("unknownKey") << endl; // It will be terminated

    cout << m["unknownKey"] << endl; // This will give output 0.
    cout << m.at("unknownKey") << endl;


    //----------Size-----------
    cout << m.size() << endl;
    // O/P :- 4, as we have made 4 entries till now

    //------To check presence------
    cout << m.count("bro") << endl;
    cout << m.count("") << endl;

    //-----Erase----
    m.erase("love");
    cout << m.size() << endl;

    // Traversal
    for(auto i:m)
    {
        cout << i.first << " " << i.second << endl; 
    }


    // Iterator
    unordered_map<string, int> :: iterator it = m.begin();
    while(it != m.end())
    {
        cout << it -> first << " " << it -> second << endl;
        it++;
    }
return 0;
}