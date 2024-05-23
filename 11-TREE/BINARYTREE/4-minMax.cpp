#include<iostream>
using namespace std;
class Node{
    public : 
    int data;
    Node* left;
    Node* right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* buildTree(Node* root, int data)
{
    // base case 
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if(data < root->data)
    {
        root->left = buildTree(root->left, data);
    }else{
        root->right = buildTree(root->right, data);
    }
    return root;
}
void takingInput(Node* &root)
{
    int data; 
    cin >> data;
    while(data != -1)
    {
        root = buildTree(root, data);
        cin >> data;
    }
}
void inorder(Node* root)
{
    // base case    
    if(root == NULL)
    return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node* minNode(Node* root)
{
    // base case 
   if(root->left == NULL){
    return root;
   }
   return minNode(root->left);
}
Node* maxNode(Node* root)
{
    // base case 
   if(root->right == NULL){
    return root;
   }
   return minNode(root->right);
}

int main()
{
    Node* root = NULL;
    cout << "Enter the data for tree" << endl;
    takingInput(root);
    Node* minnode = minNode(root);
    cout << "The minimum of tree is " <<  minnode->data << endl;
    Node* maxnode = maxNode(root);
    cout << "The maximum of tree is " <<  maxnode->data << endl;


}