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
    while(temp -> next != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtTail(node* head, int value)
{
    node* new_node = new node(value);

    if(head == NULL)
    {
        head = new_node;
        return;
    }
    
    
    node* temp = head;

    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }

    temp -> next = new_node;
    return;


}

node* merge(node* &head1, node* &head2)
{
    node* ptr1 = head1;
    node* ptr2 = head2;
    node* dummyNode = new node(-1);
    node* ptr3 = dummyNode;

    while(ptr1 != NULL && ptr2 != NULL)
    {
        if(ptr1 -> data < ptr2 -> data)
        {
            ptr3 -> next = ptr1;
            ptr1 = ptr1 -> next;
        }
        else{
            ptr3 -> next = ptr2;
            ptr2 = ptr2 -> next;
        }
        ptr3 = ptr3 -> next;
    }

    while(ptr1 != NULL)
    {
        ptr3 -> next = ptr1;
        ptr1 = ptr1 -> next; 
        ptr3 = ptr3 -> next;
    }

    while(ptr2 != NULL)
    {
        ptr3 -> next = ptr2;
        ptr2 = ptr2 -> next;
        ptr3 = ptr3 -> next;
    }
    return dummyNode -> next;
}

int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    int arr1[] = {1,4,5,7};
    int arr2[] = {2,3,6};
    // for(int i=0; i<4; i++)
    // {
    //     insertAtTail(head1, arr1[i]);
    // }
    // // for(int i=0; i<3; i++)
    // // {
    // //     insertAtTail(head2, arr2[i]);
    // // }

    node* second = new node(1);
    node* third = new node(2);

    second -> next = third;
    

    printList(head1);
    // printList(head2);
    // node* newHead = merge(head1, head2);
    // printList(newHead);
return 0;
}