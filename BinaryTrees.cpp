#include<bits/stdc++.h>
using namespace std;

class node{
        public:

        int data;
        node* left;
        node* right;

        node(int d)
        {
            this -> data = d;
            this -> left = NULL;
            this -> right = NULL;
        }
};

node* buildTree(node* root){
    cout << "Enter the data: "  << endl;
    int data;
    cin >> data;
    root = new node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout << "Enter data for left: " << endl;
    root -> left = buildTree(root -> left);
    cout << "Enter data for right: "<< endl;
    root -> right = buildTree(root -> right);
    return root;
}

void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp = q.front();
        
        q.pop();

        if(temp == NULL) // previous level is completely traversed
        {
            // Seperator
            cout << endl;
            if(!q.empty()) // Queue still has child nodes
            {
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data << " ";
            if(temp -> left) // Checks if the left is not NULL/Empty
            {
                q.push(temp -> left);
            }   

            if(temp -> right)
            {
                q.push(temp -> right);
            }
        }

        
    }
}

// Inorder Traversal 
void inOrder(node* root)
{
    // Base Case
    if(root == NULL)
    {
        return;
    }

    inOrder(root -> left);
    cout << root -> data << " ";
    inOrder(root -> right);
}
void preOrder(node* root){
    if(root == NULL)
    {
        return;
    }

    cout << root -> data << " "; // N
    preOrder(root -> left); // L
    preOrder(root -> right); // R
}

void postOrder(node* root)
{
    if(root == NULL)
    {
        return;
    }

    postOrder(root -> left); //L
    postOrder(root -> right); // R
    cout << root -> data << " "; // N
}

void buildFromLevelOrder(node* &root)
{
    queue<node*> q;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp -> data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1)
        {
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }

        cout << "Enter right node for: " << temp -> data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1)
        {
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }
    }
}

int main(){
    node* root = NULL;


    buildFromLevelOrder(root);
    levelOrderTraversal(root);

    //creating a Tree1
    // root = buildTree(root);
    
    // // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // cout << "Inorder traversal is : ";
    // inOrder(root);

    // cout << endl;

    // cout << "Preorder Traversal is : ";
    // preOrder(root);

    // cout << endl;

    // cout << "Post Order traversal is: ";
    // postOrder(root);
    
return 0;
}