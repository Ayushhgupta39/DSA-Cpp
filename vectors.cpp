#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0; i<v.size(); i++)
    {
        // cout << v[i] << " " ;
    }

    vector <int> :: iterator i;
    for(i=v.begin(); i != v.end(); i++)
    {
        cout << *i << endl;
    }

    for(auto element:v) // Here element is not an iterator but the element itself of the vector array
    {
        cout << element << " ";
    }

    v.pop_back(); 
    cout << endl;

    vector<int> v2 (3,50); // 50 50 50

    swap(v,v2); // swap the values of v and v2

    for(auto i:v2)
    {
        cout << i << " ";
    }

    v.push_back(1   );
    cout << endl;
    sort(v.begin() , v.end());
    for(auto i:v)
    {
        cout << i <<" ";
    }

    
return 0;
}