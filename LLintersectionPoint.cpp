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

int length(node* &head)
{
    int l = 0;
    node* temp = head;
    while(temp != NULL)
    {
        temp = temp -> next;
        l++;
    }

    return l;
}

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

void intersect(node* &head1, node* &head2, int pos)
{
    node* temp1 = head1;
    pos--;
    while(pos--)
    {
        temp1 = temp1 -> next;
    }
    node* temp2 = head2;
    while(temp2 -> next != NULL)
    {
        temp2 = temp2 -> next;
    }

    temp2 -> next = temp1;
}

int intersectionPoint(node* &head1, node* &head2)
{
    int l1 = length(head1);
    int l2 = length(head2);

    int diff = 0;
    node* ptr1;
    node* ptr2;

    if(l1 > l2)
    {
        diff = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else{
        diff = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while(diff){
        ptr1 = ptr1 -> next;
        if(ptr1 == NULL)
        {
            return -1;
        }
        diff--;
    }

    while(ptr1 != NULL && ptr2 != NULL)
    {
        if(ptr1 == ptr2)
        {
            return ptr1 -> data;
        }
        ptr1 = ptr1 -> next;
        ptr2 = ptr2 -> next;
    }

    return -1;
}

int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    insertAtTail(head1,1);
    insertAtTail(head1,2);
    insertAtTail(head1,3);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    insertAtTail(head1,6);
    // insertAtTail(head2,9);
    // insertAtTail(head2,10);
    

    printList(head1);
    

   
return 0;
}