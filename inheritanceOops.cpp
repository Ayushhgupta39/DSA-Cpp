#include<bits/stdc++.h>
using namespace std;

//Single Inheritence
// class A{
//         public:
        
//         void func(){
//             cout << "Inherited" << endl;
//         }
//     };

// class B : public A{  
// };

//Multiple Inheritance
class A{
        public:
        
        void Afunc(){
            cout << "Function A" << endl;
        }
    };

class B{
    public:

    void Bfunc()
    {
        cout << "Function B" << endl;
    }  
};

class C : public A, public B{

};

int main()
{
    // B b;
    // b.func();

    C c;
    c.Afunc();
    c.Bfunc();
    return 0;
}