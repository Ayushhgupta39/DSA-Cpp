#include<bits/stdc++.h>
using namespace std;

// Implementation
class Queue {
    public:

    int size;
    int* arr;
    int front;
    int rear;

    Queue(int val) {
        this -> size = val;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    // Push Operation
    void enqueue(int data) {
        if(rear == size) {
        cout << "Queue is Full" << endl;
        return;
        }
        else {
        arr[rear] = data;
        rear++;
        }
    }

    // Pop Operation
    void dequeue() {
        if(front == rear) {
            return;
        }
        else {
            arr[front] = -1;
            front++;
            if(front == rear) {
                front = 0;
                rear = 0;
            }
        }
    }

    // Returns the Front element
    int Front() {
        if(front == rear) {
            return -1; // Queue is Empty
        }
        else {
            return arr[front];
        }
    }

    // Checks if the Queue is Empty or Not
    bool isEmpty() {
        if(front == rear) {
            return true;
        }
        return false;
    }
};

int main(){
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.Front() << endl;
    q.dequeue();
    cout << q.Front() << endl;

return 0;
}