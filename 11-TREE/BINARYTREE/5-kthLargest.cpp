#include<iostream>
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
void inorder(Node* root, vector<int> &v)
{
    // base case    
    if(root == NULL)
    return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}
int kthLargest(vector<int> v, int k)
{
    return v[k-1];   
}
int main()
{
    cout << "Enter the data for tree" << endl;
    Node* root = NULL;
    takingInput(root);
    vector<int> v;
    inorder(root, v);
    int ans = kthLargest(v, 0);
    cout << "The kth largest element is " << ans << endl;
}