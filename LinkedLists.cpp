#include<bits/stdc++.h>
using namespace std;

class node{
    public:

    int data;
    node* next;

    node(int val)
    {
        this -> data = val;
        this -> next = NULL;
    }
};

void printList(node* head)
{
    node* temp = head;
    while(temp -> next != NULL)
    {
        cout << temp -> data;
        temp = temp -> next;
    }
}
    
void insertAtHead(node* &head, int value) // Taking value by reference because we don't want to create copy but to make changes in the original value
{
    //Creating new nodez
    node* new_node = new node(value);
    new_node -> next = head;

    //Pointing the new node to head
    head = new_node;
}

void insertAtTail(node* &head, int value)
{   
    //Creating the new node for insertion
    node* new_node = new node(value);

    if(head == NULL)
    {
        head = new_node;
        return;
    }

    //temp here is a pointer not a node this is to remember
    node* temp = head;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }

    //Here it will make the last node point to the new_node
    temp -> next = new_node;
    
}

void deleteHead(node* &head)
{
    node* toDelete = head;
    head = head -> next;

    delete toDelete;
}

void deleteNode(node* &head, int value)
{
    // If the list is empty
    if(head == NULL)
    {
        return;
    }

    //if there is only one element in the list
    if(head -> next == NULL)
    {
        deleteHead(head);
        return;
    }

    node* temp = head;
    while(temp -> next -> data != value)
    {
        temp = temp -> next;
    }
    node* toDelete = temp -> next;
    //Pointing the node to the next to next node
    temp -> next = temp -> next -> next;
    delete toDelete;
}

//Searching in a Linked list
bool search(node* &head, int key)
{
    node* temp = head;
    while(temp != NULL)
    {
        if(temp -> data == key)
        {
            return true;
        }
        temp = temp -> next;
    }
    return false;
}

// Reverse a linkedList
node* reverseList(node* &head)
{
    node* previous = NULL;
    node* current = head;
    node* nextPtr;

    while(current != NULL)
    {
        nextPtr = current -> next;
        current -> next = previous;
        previous = current;
        current = nextPtr;
    }
    head = previous;
    return head;
}

//Reverse a linkedList using Recursion
node* recursiveReverse(node* &head){

    if(head == NULL || head -> next == NULL)
    {
        return head;
    }

    node* newHead = recursiveReverse(head -> next);
    head -> next -> next = head;
    head -> next = NULL; 

    return newHead;
}

int main(){
    
    //Creating a new node
    node* node1 = new node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    //Head pointed to node1
    node* head = node1;

    insertAtHead(head,12);

    printList(head);

    insertAtTail(head, 13);
    printList(head);

    cout << search(head, 12) << endl;
    cout << search(head, 15) << endl;

    deleteNode(head, 13);
    printList(head);

    deleteHead(head);
    printList(head);

    insertAtTail(head,11);
    insertAtTail(head,12);
    insertAtTail(head,13);
    insertAtTail(head,14);
    printList(head);

    reverseList(head);
    printList(head);

    node* new_node = recursiveReverse(head);
    printList(new_node);

    
return 0;
}