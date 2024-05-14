// // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
// // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 
#include<iostream>
#include<queue>
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

// recursive way of building the tree 
Node* buildTree(Node* root)
{
   int data;
   cin >> data;
   root = new Node(data);
   // base case 
   if(data == -1)
   {
      return NULL;
   }
   cout << "Enter the data for left node of " << root->data << endl;
   root->left = buildTree(root->left);
   cout << "Enter the data for right node of " << root->data << endl;
   root->right = buildTree(root->right);
}

// iterative method for building the tree 
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

// iterative method for traversing the tree 
void Traversal(Node* root)
{
   queue<Node*> q;
   q.push(root);
   q.push(NULL);
   while(!q.empty())
   {
      Node* temp = q.front();
      q.pop();
      if(temp == NULL)
      {
         cout << endl;
         if(!q.empty())
         {
            q.push(NULL);
         }
      }
      else{
         cout << temp->data << " ";
         if(temp->left)
         {
            q.push(temp->left);
         }
         if(temp->right)
         {
            q.push(temp->right);
         }
      }
   }
}

// NLR TRAVERSAL (Node, left and right) recursive way
void inorder(Node* root)
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
void preorder(Node* root)
{
   // base case 
   if(root == NULL)
   {
      return ;
   }
   cout << root->data << " ";
   preorder(root->left);
   preorder(root->right);
}
void postorder(Node* root)
{
   // base case 
   if(root == NULL)
   {
      return ;
   }
   postorder(root->left);
   postorder(root->right);
   cout << root->data << " ";
}
int hightOfTree(Node* root)
{
   queue<Node*> q;
   q.push(root);
   q.push(NULL);
   int hight = 0;
   while(!q.empty())
   {
      Node* temp = q.front();
      q.pop();
      if(temp == NULL)
      {
         hight++;
         if(!q.empty())
         {
            q.push(NULL);
         }
      }else{
         if(temp->left)
         {
            q.push(temp->left);
         }
         if(temp->right)
         {
            q.push(temp->right);
         }
      }
   }
   return hight;
}
int main()
{
   Node* root = NULL;
   cout << "Enter the data for root node " << endl;
   buildTreei(root);
   inorder(root);
   cout << "The hight is " << hightOfTree(root) << endl;
   // Traversal(root);
   pair<int, int> ans;
   ans = dimeterMehtod(root);
   cout << "The dimeter is " << ans.first << endl;
   cout << "The hight is " << ans.second << endl;
} 