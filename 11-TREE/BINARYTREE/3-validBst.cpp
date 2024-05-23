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
void inorder(Node* root, vector<int> &ans)
{
    // base case    
    if(root == NULL)
    return;
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right, ans);
}
bool isBst(vector<int> v)
{
    for(auto i : v)
    {
        cout  << i <<  " ";
    }
    return false;
    // for(int i = 0; i<v.size()-1; i++)
    // {
    //     if(v[i] >= v[i+1])
    //     {
    //         return false;
    //     }
    // }
    // return true;
}
int main()
{
    Node* root = NULL;
    cout << "Enter the data for root node" << endl;
    takingInput(root);
    vector<int> v;
    inorder(root, v);
    bool ans = isBst(v);
    if(ans)
    {
        cout << "Yes it is a bst" << endl;
    }
    else{
        cout << "Not bst" << endl;
    }
}