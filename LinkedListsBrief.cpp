#include<bits/stdc++.h>
using namespace std;

// Declaring the Node
class node{
    public:

    int data;
    node* next;
    
    //Constructor
    node(int data) 
    {
        this -> data = data;
        this -> next = NULL;
    }

    // Destructor
    ~node(){
        int value = this -> data;
        // Memory free
        if(this -> next != NULL)
        {
            delete next;
            this -> next = NULL;
        }
    }
};

// Function to print the Linked List
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

// Insertion at Head
void insertAtHead(node* &head, int data)
{
    node* new_node = new node(data);
    new_node -> next = head;
    head = new_node;
}

// Insertion at Tail
void insertAtTail(node* &tail, int data)
{
    node* new_node = new node(data);
    tail -> next = new_node;
    tail = new_node;
}

// Insertion at a Particular position
void insertAtPosition(node* &tail, node* &head, int position, int data)
{
    // If position is first
    if(position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    
    else{
    node *new_node = head;
    int count = 1;

    while (count < position - 1)
    {
        new_node = new_node -> next;
        count++;
    }

    if(new_node -> next == NULL)
    {
        insertAtTail(tail,data);
        return;
    }
    // Creating a Node for data
    node *nodeToInsert = new node(data);
    nodeToInsert -> next = new_node -> next;

    new_node -> next = nodeToInsert;
    }
    
}

// Deleting a Node
void deleteNode(node* &head, int position)
{
    // Deleting the first Node or Head Node
    if(position == 1)
    {
        node *nodeToDelete = head;
        head = head -> next;
        // Now, we will free memory of the deleted Node
        nodeToDelete -> next = NULL;
        delete(nodeToDelete);
    }
    else{
        // Deleting any other Middle or last Node
        node *current = head;
        node *previous = NULL;

        int count = 1;
        while(count < position)
        {
            previous = current;
            current = current -> next;
            count++;
        }

        previous -> next = current -> next;
        current -> next = NULL;
        delete current;

    }
}

bool search(node* head, int key)
{
    node *temp = head;
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

int main()
{
    node* node1 = new node(10); //Dynamically allocates value in heap
    
    // Head pointing to node1
    node* head = node1;  
    node* tail = node1;

    printList(head);

    insertAtHead(head, 9);
    printList(head);

    insertAtHead(head, 8);
    printList(head);

    insertAtTail(tail, 11);
    printList(head);

    insertAtTail(tail,12);
    printList(head);

    insertAtPosition(tail,head, 4, 3);
    printList(head);

    insertAtPosition(tail, head, 1, 0);
    printList(head);

    deleteNode(head, 1);
    printList(head);

    deleteNode(head, 4);
    printList(head);

    cout << search(head, 10) << endl;
    cout << search(head, 15) << endl;
    
    return 0;
}