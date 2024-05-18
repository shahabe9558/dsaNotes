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
int sumOfLongestPath(Node* &root, int len, int maxLen, int sum, int maxSum)
{
    // base case
    if(root == NULL)
    {
        if(len > maxLen)
        {
            maxLen = len;
            maxSum = sum;
        }
        else if(len == maxLen)
        {
            maxSum = max(sum, maxSum);
        }
        return sum;
    }
    sum = sum + root->data;
    sumOfLongestPath(root->left, len+1, maxLen, sum, maxSum);
    sumOfLongestPath(root->right, len+1, maxLen, sum, maxSum);
}
int main(){
    cout << "Enter the data for root node " << endl; 
    Node* root = NULL;
    buildTreei(root);
    inorder(root);
    int len = 0;
    int maxLen = 0;
    int sum = 0;
    int maxSum = INT8_MIN;
    cout << endl;
    cout << "The max sum is " << sumOfLongestPath(root, len, maxLen, sum, maxSum);
}