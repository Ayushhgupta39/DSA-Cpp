#include<bits/stdc++.h>
using namespace std;

class node{
    public:

    int data;
    node* next;
    node* prev;

    // Constructor
    node(int d)
    {
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }

    ~node(){
        int val = this -> data;
        if(next != NULL)
        {
            delete next;
            next = NULL;
        } 
    }
};

void printList(node* &head){
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// To return the length of a Doubly LL
int getLength(node* head){
    node* temp = head;
    int length = 0;
    while(temp != NULL)
    {
        length++;
        temp = temp -> next;
    }

    return length;
}

// To insert a Node at Head in a Doubly LL
void insertAtHead(node* &head, int d){
    node* new_node = new node(d);
    new_node -> next = head;
    head -> prev = new_node;
    head = new_node;
}

// To insert a Node at Tail in a Doubly LL
void insertAtTail(node* &head, int d)
{
    node* new_node = new node(d);

    if(head == NULL)
    {
        new_node = head;
        return;
    }

    node* temp = head;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = new_node;
    new_node -> prev = temp;
    
}

void deleteNode(node* &head, int k)
{
     
    if(k == 1)
    {
        node* temp = head;
        temp -> next -> prev = NULL;
        head = temp-> next;
        temp -> next = NULL;
        delete temp;
    }
    else{

        node* curr = head;
        node* prev = NULL;

        int count = 1;
        while(count < k)
        {
            prev = curr;
            curr = curr -> next;
            count++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }

    
}

// To insert a Node at a given Position in a Doubly LL
void insertAtPosition(node* &head, int d, int k)
{
    node* new_node = new node(d);

    if(k == 1)
    {
        new_node -> next = head;
        head -> prev = new_node;
        head = new_node;
        return;
    }

    node* temp = head; int count = 1;
    while (count < k-1)
    {
        temp = temp -> next;
        count++;
    }

    //Inserting at last position
    if(temp -> next == NULL)
    {
        insertAtTail(head,d);
    }

    new_node -> next = temp -> next;
    temp -> next -> prev = new_node;
    temp -> next = new_node;
    new_node -> prev = temp;

    
}

int main(){
    node* head = new node(10);
    node* second = new node(11);
    node* third = new node(12);
    head -> next = second;
    second -> next = third;
    
    printList(head);

    cout << getLength(head) << endl;

    insertAtHead(head,9);
    insertAtHead(head,8);
    printList(head);

    insertAtTail(head, 13);
    insertAtTail(head, 14);
    printList(head);

    insertAtPosition(head, 7, 2);
    insertAtPosition(head, 6, 1);
    // insertAtPosition(head, 15, 10);
    printList(head);

    deleteNode(head, 1);
    printList(head);

    deleteNode(head, 3);
    printList(head);

    deleteNode(head,7);
    printList(head);
return 0;
}