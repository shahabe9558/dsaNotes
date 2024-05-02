#include<iostream>
#include<queue>

using namespace std;

class Node{
   public:
   int data;
   Node* left;
   Node* right;
   // creating a constructor
   Node(int d)
   {
      this->data = d;
      this->left = NULL;
      this->right = NULL;
   }
};

// ITERATIVE WAY 

void builtFromLevelOrder(Node* &root)
{
   queue<Node*> q;
   cout <<"Enter the data for root node" << endl;
   int data;
   cin >> data;
   root = new Node(data);
   q.push(root);
   while(!q.empty())
   {
      Node* temp = q.front();
      q.pop();

      cout <<"Enter the data for left node of " << temp->data << endl;
      int leftData;
      cin >> leftData;
      if(leftData != -1)
      {
        temp->left = new Node(leftData);
        q.push(temp->left);
      }

      cout <<"Enter the data for right node of " << temp->data << endl;
      int rightData;
      cin >> rightData;
      if(rightData != -1)
      {
        temp->right = new Node(rightData);
        q.push(temp->right);
      }
   }
}

// RECURSIVE CREATION

Node* buildTree(Node* &root)
{
   cout << "Enter the data for root node" << endl;
   int data;
   cin >> data;
   // creating a root node

   root = new Node(data);

   // base case 
   if(data == -1)
   {
      return NULL;
   }
   cout << "Enter the data to be inserted at left of " <<data << endl;
   root->left = buildTree(root->left);
   cout << "Enter the data to be inserted at right of " << data << endl;
   root->right = buildTree(root->right);
   return root;
}


// simple traversal

void Traversal(Node* root)
{
   queue<Node*> q;
   q.push(root);
   cout << "Printing the Elements of tree" << endl;
   while(!q.empty())
   {
      Node* temp = q.front();
      cout << temp->data << " ";
      q.pop();
      if(temp->left != NULL)
      {
         q.push(temp->left);
      }
      if(temp->right != NULL)
      {
         q.push(temp->right);
      }
   }
}
void levelOrderTraversal(Node* root)
{
   queue<Node*> q;
   q.push(root);
   q.push(NULL);
   while(!q.empty())
   {
      Node* temp = q.front();
      q.pop();
      if(temp == NULL) // purana level traverse ho chuika hai
      {
         cout << endl;
         if(!q.empty())
         {
            q.push(NULL);
         }
      }
      else{
         cout << temp->data <<" ";
         if(temp->left)
         q.push(temp->left);
         if(temp->right)
         q.push(temp->right);
      }
   }
}

// LNR 
void inorder(Node* root)
{
   // base case 
   if(root == NULL)
   {
      return ;
   }
   inorder(root->left);
   cout << root->data << " ";
   inorder(root->right);

}
// NLR 
void preorder(Node* root)
{
   // base case 
   if(root == NULL)
   return ;
   cout << root->data << " ";
   preorder(root->left);
   preorder(root->right);
}
//LRN
void postOrder(Node* root)
{
   if(root == NULL)
   return ;
   postOrder(root->left);
   postOrder(root->right);
   cout << root->data << " ";
}

void hightOftree(Node* root)
{
   queue<Node*> q;
   q.push(root);
   q.push(NULL);
   int hight = 0;
   while(!q.empty())
   {
      Node* temp = q.front();
      q.pop();
      if(temp == NULL) // purana level traverse ho chuika hai
      {
         hight++;
         if(!q.empty())
         {
            q.push(NULL);
         }
      }
      else{
         cout << temp->data <<" ";
         if(temp->left)
         q.push(temp->left);
         if(temp->right)
         q.push(temp->right);
      }
   }
   cout << "Hight of tree is = " << hight;
}

int main()
{
  Node* root = NULL;

 buildTree(root);
//  builtFromLevelOrder(root);
//  hightOftree(root);
//   Traversal(root);
//  levelOrderTraversal(root);
  inorder(root);
//   cout << endl;
//   preorder(root);
//   cout << endl;
//   postOrder(root);
//   cout << endl;
}



// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

// 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 
