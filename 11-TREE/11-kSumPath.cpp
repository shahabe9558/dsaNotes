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
void kPathsum(Node* root, vector<int> path, int k, int &cnt)
{
    // base case 
    if(root == NULL)
    return;
    path.push_back(root->data);
    kPathsum(root->left, path, k, cnt);
    kPathsum(root->right, path, k, cnt);
    int size = path.size();
    int sum = 0;
    for(int i = size-1; i>=0; i--)
    { 
        sum += path[i];
        if(sum == k)
        {
            cnt++;
        }
    }
    path.pop_back();
}
int main(){
    cout << "Enter the data for root node " << endl; 
    Node* root = NULL;
    buildTreei(root);
    inorder(root);
    cout << endl;
    int cnt = 0;
    int k = 5;
    vector<int> path;
    kPathsum(root, path, k, cnt);
    cout << "The total sum of k path is " << cnt;
}