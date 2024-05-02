#include<iostream>
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
void buildFromLevelOrder(Node* &root)
{
   queue<Node*> q;
   cout << "Enter the data for root node" << endl;
   int data;
   cin >> data;
   root = new Node(data);

   q.push(root);
   while(!q.empty())
   {
    Node* temp = q.front();
    q.pop();
    cout << "Enter the data for left node " << temp->data << endl;
    int leftdata;
    cin >> leftdata;
    if(leftdata != -1)
    {
        temp->left = new Node(leftdata);
        q.push(temp->left);

    }
    cout << "Enter the datr for right node" << temp->data << endl;
    int rightdata;
    cin >> rightdata;
    if(rightdata != -1)
    {
        temp->right = new Node(rightdata);
        q.push(temp->right);
    }
   }

}
// TC O(n)
int hightOfTree(Node* &root)
{
   if(root == NULL)
   {
    return 0;
   }
   int lefth = hightOfTree(root->left);
   int righth = hightOfTree(root->right);
   int ans = max(lefth, righth) + 1;
   return ans;
}
pair<int, int>dimeterFast(Node* root)
{
    if(root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    pair<int, int> left = dimeterFast(root->left);
    pair<int, int> right = dimeterFast(root->right);

    int opt1 = left.first;
    int opt2 = right.first;
    int opt3 = left.second + right.second + 1;
    pair<int, int>ans;
    ans.first = max(opt1, max(opt2, opt3));
    ans.second = max(left.second, right.second) + 1;
    return ans;

}
// TC O(n*n)
int diameter(Node* &root)
{
    return dimeterFast(root).first;
    // cout << "Hight is = " << dimeterFast(root).second;
    // if(root == NULL)
    // return 0;
    // int opt = diameter(root->left);
    // int opt2 = diameter(root->right);
    // int opt3 = hightOfTree(root->left) + hightOfTree(root->right) + 1;
    // int ans = max(opt, max(opt2, opt3));
    // return ans;
}
int main()
{
  Node* root = NULL;
  buildFromLevelOrder(root);
  cout << "Hight is = " << hightOfTree(root) << endl;
  cout <<"diameter of tree = " << diameter(root);
}