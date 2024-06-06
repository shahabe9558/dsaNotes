#include <iostream>
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
void takingInput(Node* root)
{
    cout << "Enter the data for root node" << endl;
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
int main()
{
    Node* root1 = NULL;
    Node* root2 = NULL;
    takingInput(root1);
    inorder(root1);
    takingInput(root1);
    inorder(root2);
}