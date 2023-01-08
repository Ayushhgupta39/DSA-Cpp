#include<bits/stdc++.h>
using namespace std;

class student{
    string name;
    public:
    
    int age;
    bool gender;

    student(){
        cout << "Default constructor" << endl;
        //default constructor
    }

    student(string s, int a, int g)
    {
        cout << "Parameterised constructor" << endl;
        name = s;
        age = a;
        gender = g;
        //Parameterised constructor
    }

    student(student &a)
    {
        cout << "Copy constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student()
    {
        cout << "Destructor Called" << endl;
    }

    void printInfo(){
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }

    void setName(string s)
    {
        name = s;
    }

    void getName()
    {
        cout << name << endl;
    }

    bool operator == (student &a){
        if(name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }

     
};

int main(){
    
    // student arr[3];
    // for(int i=0; i<3; i++)
    // {
    //     string s;
    //     cout << "Name = ";
    //     cin >> s;
    //     arr[i].setName(s);

    //     cout << "Age = ";
    //     cin >> arr[i].age;

    //     cout << "Gender = ";
    //     cin >> arr[i].gender;
    // }

    // for(int i=0; i<3; i++)
    // {
    //     arr[i].printInfo();
    // }

    student a("Urvi",20, 1);
    student b("Rahul", 21, 0);
    // a.printInfo();
 
    student c = a;

    if(b == a)
    {
        cout << "Same" << endl;
    }
    else{
        cout << "Not Same" << endl;
    }

return 0;
}