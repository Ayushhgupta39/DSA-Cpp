#include<bits/stdc++.h>
using namespace std;

// Declare a stack
class Stack{
    public:

    int *arr;
    int top;
    int size;

    // Constructor
    Stack(int stackSize)
    {
        this -> size = stackSize;
        arr = new int[stackSize];
        top = -1;
    }

    // Push Function
    void push(int data)
    {
        // Check if the strong has space
        if(size - top > 1)
        {
            top++;
            arr[top] = data;
        }
    }

    // Pop Function
    void pop()
    {
        if(top >= 0)
        {
            top--;
        }
    }

    // To get the top element
    int peek(){
        if(top >= 0)
        {
            return arr[top];
        }
        else{
            return -1;
        }
    }

    // To check if the stack is empty or not
    bool isEmpty(){
        if(top == -1)
        {
            return true;
        }
        return false;
    }
    
};

int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    cout << s.isEmpty() << endl;
return 0;
}