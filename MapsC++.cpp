#include<bits/stdc++.h>
using namespace std;

void Print(map<string, int> marks)
{
    map<string, int> :: iterator itr;
    for( itr = marks.begin(); itr!=marks.end(); itr++)
    {
        cout << (*itr).first << " " <<(*itr).second << endl;   
    }
}

int main()
{
    map<string, int> marks;
    marks["Harry"] = 98;    
    marks["Jack"] = 90;
    marks["Hello"] = 0;

    // Print(marks);

    marks.insert({{"Ayush", 90}, {"Mansi", 99}});

    Print(marks);

    cout << marks.size() << endl;
    return 0;
}