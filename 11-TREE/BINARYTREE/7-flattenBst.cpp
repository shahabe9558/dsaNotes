#include <iostream>
#include <vector>
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
void inorder(Node* root, vector<Node*> &node)
{
    // base case    
    if(root == NULL)
    return;
    inorder(root->left, node);
    node.push_back(root);
    inorder(root->right, node);
}
int main()
{
    Node* root = NULL;
    cout << "Enter the data for root node" << endl;
    takingInput(root);
    vector<Node*> node;
    inorder(root, node);
    int size = node.size();
    for(int i = 0; i<n; i++){
        node[i]->left = NULL;
        node[i]->right = node[i + 1];
    }

}