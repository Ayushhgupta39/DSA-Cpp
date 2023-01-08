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

// Function to reverse K nodes or in K groups in a linked list
node* reverseK_Nodes(node* &head, int k)
{
    //Base call for recursion
    if(head == NULL)
    {
        return NULL;
    }
    //reverse first K-nodes
    node* previous = NULL;
    node* current = head;
    node* nextPtr; int count = 0;
    while(current != NULL && count < k)
    {
        nextPtr = current -> next;
        current -> next = previous;
        previous = current;
        current = nextPtr;
        count++;
    }

    //Recursive call
    if(nextPtr != NULL)
    {
        head -> next = reverseK_Nodes(nextPtr,k);
    }

    return previous;
}

int main(){
    node* head = new node(10);
    node* second = new node(11);
    node* third = new node(12);
    node* fourth = new node(13);

    head -> next = second;
    second -> next = third;
    third -> next = fourth;

    printList(head);

    int k = 2;
    node* new_head = reverseK_Nodes(head, k);
    printList(new_head);
return 0;
}