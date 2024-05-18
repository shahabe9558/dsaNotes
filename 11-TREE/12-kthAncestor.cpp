#include<iostream>
#include <queue>
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
Node* buildTreei(Node* &root)
{
   int data;
   cin >> data;
   root = new Node(data);
   queue<Node*> q;
   q.push(root);
   while(!q.empty())
   {
      Node* temp = q.front();
      q.pop();
      cout << "Enter the data for left node of " << temp->data << endl;
      int leftData;
      cin >> leftData;
      if(leftData != -1)
      {
         temp->left = new Node(leftData);
         q.push(temp->left);
      }
      cout << "Enter the data for right node of " << temp->data << endl;
      int rightData;
      cin >> rightData;
      if(rightData != -1)
      {
         temp->right = new Node(rightData);
         q.push(temp->right);
      }
   }
}
void inorder(Node* &root)
{
   // base case 
   if(root == NULL)
   {
      return;
   }
   inorder(root->left);
   cout << root->data << " ";
   inorder(root->right);
}
Node* kthAncestor(Node* root, int k, int nodeData){
    // base case 
    if(root == NULL)
    {
        return NULL;
    }
    if(root->data == nodeData)
    {
        return root;
    }
    Node* leftAns = kthAncestor(root->left, k, nodeData);
    Node* rightAns = kthAncestor(root->right, k, nodeData);
    if(leftAns != NULL && rightAns == NULL)
    {
        k--;
        if(k<=0)
        {
           k = INT8_MAX;
           return root; 
        }
        return leftAns;
    }
    if(leftAns == NULL && rightAns != NULL)
    {
        k--;
        if(k<=0)
        {
           k = INT8_MAX;
           return root; 
        }
        return rightAns;
    }
}
int main(){
    cout << "Enter the data for root node " << endl; 
    Node* root = NULL;
    buildTreei(root);
    inorder(root);
    cout << endl;
    int nodeData = 2;
    int k = 1;
    Node* ans = kthAncestor(root,k, nodeData);
    if(ans)
    {
        cout << "The kth ances is " << ans->data << endl;
    }else{
        cout << "Not Present" << endl;
    }
}