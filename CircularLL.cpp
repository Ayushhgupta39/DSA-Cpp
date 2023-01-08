#include<bits/stdc++.h>
using namespace std;

class node{
    public:

    int data;
    node* next;

    node(int d)
    {
        this -> data = d;
        this -> next = NULL;
    }

    ~node(){
        int value = this -> data;
        if(this -> next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

void insertNode(node* &tail, int element, int d)
{
    //empty list
    if(tail == NULL){
        node* new_node = new node(d);
        tail = new_node;
        new_node -> next = new_node;
    }

    else{
        // Non empty list
        node* curr = tail;
        while(curr -> data != element)
        {
            curr = curr -> next;
        }

        node* temp = new node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void printList(node* &tail)
{
    node* temp = tail;
    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    }while(tail != temp);
    cout << endl;
}
int main(){
    node* tail = NULL;
    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    printList(tail);
return 0;
}