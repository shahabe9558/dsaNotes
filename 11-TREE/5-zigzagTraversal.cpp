#include <iostream>
#include <vector>
#include <queue>
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
// tree build to karoge 
Node* buildTree(Node* &root)
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
vector <int> traversal(Node* root)
{
    queue<Node*> q;
    vector<int> result;
    if(root == NULL)
    {
        return result;
    }
    bool leftToright = true;
    q.push(root);
    while(!q.empty())
    {
        int size = q.size();
        vector<int> ans(size);
        // level ko traverse kar lo 
        for(int i = 0; i<size; i++)
        {
            Node* frontNode = q.front();
            q.pop();
            int index = leftToright ? i : size - i - 1;
            ans[index] = frontNode->data;
            if(frontNode->left)
            {
                q.push(frontNode->left);
            }
            if(frontNode->right){
                q.push(frontNode->right);
            }
        }
        leftToright = !leftToright;
        for(auto i : ans)
        {
            result.push_back(i);
        }
    }
}
void print(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout << root->data << "";
    print(root->left);
    print(root->right);
}
int main()
{
    Node* root = NULL;
    cout << "Enter the data for root node " << endl;
    buildTree(root);
    vector<int> ans = traversal(root);
    for(auto i : ans)
    {
        cout << i << " ";
    }
}
