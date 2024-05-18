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
Node* lowestCommomAncestor(Node* &root, int n1, int n2)
{
    // base case 
    if(root == NULL)
    return NULL;
    if(root->data == n1 || root->data == n2)
    {
        return root;
    }
    Node* leftAns = lowestCommomAncestor(root->left, n1, n2);
    Node* rightAns = lowestCommomAncestor(root->right, n1, n2);
    if(leftAns != NULL && rightAns != NULL)
    {
        return root;
    }
    else if(leftAns != NULL && rightAns == NULL)
        return leftAns;
    else if(leftAns == NULL && rightAns != NULL)
        return rightAns;
    else{
        return NULL;
    }
}
int main(){
    cout << "Enter the data for root node " << endl; 
    Node* root = NULL;
    buildTreei(root);
    inorder(root);
    cout << endl;
    int n1 = 3;
    int n2 = 4;
    Node* lca = lowestCommomAncestor(root, n1, n2);
    cout << "The LCA is " << lca->data;
}