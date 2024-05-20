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
void postorder(Node* &root)
{
   // base case 
   if(root == NULL)
   {
      return;
   }
   postorder(root->left);
   postorder(root->right);
   cout << root->data << " ";
}
int findPos(int in[], int element, int n)
{
    for(int i = 0; i<n; i++)
    {
        if(in[i] == element)
        {
            return i;
        }
    }
    return -1;
}
Node* buildTree(int in[], int pre[], int index, int inSTart, int inEnd, int n)
{
    // base case 
    if(index >= n || inSTart > inEnd)
    return NULL;
    int element = in[index++];
    Node* root = new Node(element);
    int pos = findPos(in, element, n);
    root->left = buildTree(in, pre, index, inSTart, pos -1, n);
    root->right = buildTree(in, pre, index, pos + 1, inEnd, n);
    return root;
}
int main(){
    int in[4] = {1,6,8,7};
    int pre[4] = {1,6,7,8};
    int index = 0;
    int inStart = 0;
    int inEnd = 4;
    Node* ans = buildTree(in, pre, index, inStart, inEnd, 4);
    postorder(ans);
}