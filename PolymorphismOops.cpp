#include<bits/stdc++.h>
using namespace std;


// Function Overloading

class apnaCollege
{
    public:
    void fun()
    {
        cout << "Function with No argument" << endl;
    }

    void fun(int x)
    {
        cout << "Function with int argument" << endl;
    }

    void fun(double x)
    {
        cout << "Function with double argument" << endl;
    }

};

int main()
{

    apnaCollege obj;
    obj.fun();
    obj.fun(4);
    obj.fun(6.2);
    return 0;
}