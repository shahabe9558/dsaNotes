#include <iostream>
#include<queue>
using namespace std;
class Node{
   
   public:
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
Node* buildingBST(Node* root, int d)
{
    if(root == NULL)
    {
        root = new Node(d);
        return root;
    }
    // right part me jasoo 
    if(d > root->data)
    {
        root->right = buildingBST(root->right, d);
    }else{
        root->left = buildingBST(root->left, d);
    }
    return root;
}
void takinginput(Node* &root)
{
   int data;
   cin >> data;
   while(data != -1)
   {
    root = buildingBST(root, data);
    cin >> data;
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

void postOrder(Node* root)
{
  // base case 
  if(root == NULL)
  {
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}
bool searchInbst(Node* root, int k)
{
  // base case 
  if(root == NULL)
  {
    return false;
  }
  if(root->data == k)
  {
    return true;
  }
  if(root->data > k)
  {
    return searchInbst(root->left, k);
  }
  else{
   return searchInbst(root->right, k);
  }
}
bool searchInbstloop(Node* root, int k)
{
  Node* temp = root;
  while(temp != NULL)
  {
    if(temp->data == k)
    {
      return true;
    }
    if(temp->data > k)
    {
      temp = temp->left;
    }else{
      temp = temp->right;
    }
  }
  return false;
}
int main()
{
    Node* root = NULL;
    cout << "Enter the data for root node" << endl;
    takinginput(root);
    // cout << root;
    cout << "Printing the data" << endl;

    levelOrderTraversal(root);

    bool ans = searchInbstloop(root, 9);
    if(ans)
    cout << "Key in present" << endl;
    else
    cout << "Key is absent" << endl;

}