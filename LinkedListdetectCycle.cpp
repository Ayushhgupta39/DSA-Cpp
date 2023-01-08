#include<bits/stdc++.h>
using namespace std;

class node{
    public:

    int data;
    node* next;

    //Constructor  
    node(int data){
        this -> data = data;
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

void insertAtHead(node* &head, int value) // Taking value by reference because we don't want to create copy but to make changes in the original value
{
    //Creating new node
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

void makeCycle(node* &head, int pos)
{
    node* temp = head;
    node* startNode;

    int count = 1;
    while(temp -> next != NULL)
    {
        if(count == pos)
        {
            startNode = temp;
        }
        temp = temp -> next;
        count++;
    }

    temp -> next = startNode;
}

bool detectCycle(node* &head)
{
    node* slow = head;
    node* fast = head;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
        if(fast == slow)
        {
            return true;
        }
        
    }
    return false;
}

void removeCycle(node* &head)
{
    node* slow = head;
    node* fast = head;

    do{
        slow = slow -> next;
        fast = fast -> next -> next;
    }while(slow != fast);

    fast = head;
    while(slow -> next != fast -> next)
    {
        slow = slow -> next;
        fast = fast -> next;
    }

    slow -> next = NULL;
}


int main(){
    
    //Creating a new node
    node* node1 = new node(10);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    //Head pointed to node1
    node* head = node1;

    
    insertAtTail(head,11);
    insertAtTail(head,12);
    insertAtTail(head,13);
    insertAtTail(head,14);
    insertAtTail(head,15);
    printList(head);

    makeCycle(head, 3);
    cout << detectCycle(head) << endl ;
    removeCycle(head);
    cout << detectCycle(head) << endl ;



    

    
return 0;
}