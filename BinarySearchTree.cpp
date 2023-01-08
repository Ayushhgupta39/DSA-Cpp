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

node* insertIntoBST(node* root, int d)
{
    // Base Case
    if(root == NULL)
    {
        root = new node(d);
        return root ;
    }

    if(d > root -> data){
        // To insert into the right part
        root -> right = insertIntoBST(root->right, d);
    }
    else{
        // To insert into the left part
        root -> left = insertIntoBST(root->left, d);
    }
    return root;
}

void takeInput(node* &root){
    int data;
    cin >> data;

    while(data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
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

int minVal(node* root){
    node* temp = root;

    while(temp -> left != NULL)
    {
        temp = temp -> left;
    }

    return temp -> data;
}

int maxVal(node* root){
    node* temp = root;

    while(temp -> right != NULL) 
    {
        temp = temp -> right;
    }

    return temp -> data;
}

node* deletefromBST(node* root, int val)
{
    // Base Case
    if(root == NULL)
    {
        return root;
    }

    if(root -> data = val)
    {
        // 0 child
        if(root -> left == NULL && root -> right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child

        // Left Child
        if(root -> left != NULL && root -> right == NULL)
        {
            node* temp = root -> left;
            delete root;
            return temp;
        }

        // Right Child
        if(root -> left == NULL && root -> right != NULL)
        {
            node* temp = root -> right;
            delete root;
            return temp;
        }

        // 2 child
        if(root -> left != NULL && root -> right != NULL)
        {
            int mini = minVal(root -> right);
            root -> data = mini;
            root -> right = deletefromBST(root -> right, mini);
            return root;
        }
    }

    else if(root -> data > val)
    {
        root -> left = deletefromBST(root -> left, val);
        return root;
    }

    else{
        root -> right = deletefromBST(root -> right, val);
        return root;
    }
}

int main(){
    node* root = NULL;

    cout << "Enter data to create BST" << endl;
    takeInput(root);

    cout << "The resulting BST is: " << endl; 
    levelOrderTraversal(root);

    // cout << "Inorder Output is: " << endl;
    // inOrder(root); cout << endl;

    // cout << "Preorder Output is: " << endl;
    // preOrder(root); cout << endl;

    // cout << "Postorder Output is: " << endl;
    // postOrder(root); cout << endl;

    // cout << "Min Value is: " << minVal(root) << endl;
    // cout << "Max Value is: " << maxVal(root) << endl;

    root = deletefromBST(root, 30);
    cout << "The resulting BST is: " << endl; 
    levelOrderTraversal(root);
return 0;
}