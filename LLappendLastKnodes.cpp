#include<bits/stdc++.h>
using namespace std;

class node{
    public:

    int data;
    node* next;

    node(int value)
    {
        this -> data = value;
        this -> next = NULL;
    }
};

void printList(node* &head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void appendLast_Knodes(node* &head, int k)
{
    int length = 1;
    node* temp = head;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
        length++;
    }
    temp -> next = head;

    temp = head; int count = 1;
    int pos = length - k;
    while(count < pos)
    {
        temp = temp -> next;
        count++;
    }

    head = temp -> next;
    temp -> next = NULL;
}

int main(){
    node* head = new node(1);
    node* second = new node(2);
    node* third = new node(3);
    node* fourth = new node(4);
    node* fifth = new node(5);
    node* sixth = new node(6);

    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;

    printList(head);
    
    appendLast_Knodes(head, 3);
    printList(head);
}