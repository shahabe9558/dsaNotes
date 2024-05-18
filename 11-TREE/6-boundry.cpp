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
void buildtree(Node* &root)
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
        cout << "Enter the data for root left " << temp->data << endl;
        int leftData;
        cin >> leftData;
        if(leftData != -1)
        {
         temp->left = new Node(leftData);
         q.push(temp->left);
        }
        cout << "Enter the data for root right " << temp->data << endl;
        int rightData;
        cin >> rightData;
        if(rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}
void leftTraversal(Node* &root, vector<int> &ans)
{
    if(root == NULL || root->left == NULL && root->right == NULL)
    {
        return;
    }
    ans.push_back(root->data);
    if(root->left)
    {
        leftTraversal(root->left, ans);
    }
    else{
        leftTraversal(root->right, ans);
    }
}
void leafTraversal(Node* &root, vector<int> &ans)
{
    if(root == NULL)
    {
        return;
    }
    if(root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
    }
    leafTraversal(root->left, ans);
    leafTraversal(root->right, ans);
}
void rightTraversal(Node* &root, vector<int> &ans)
{
    if(root == NULL || root->left == NULL && root->right == NULL)
    {
        return;
    }
    if(root->right)
    {
        rightTraversal(root->right, ans);
    }else{
        rightTraversal(root->left, ans);
    }
    ans.push_back(root->data);

}
vector<int> bndrTraversal(Node* &root, vector<int> &ans)
{
    if(root == NULL)
    {
        return ans;
    }
    ans.push_back(root->data);
    // left part lo print kar do 
    leftTraversal(root->left, ans);
    // leaf node ko print karao 
    leafTraversal(root->left, ans);
    leafTraversal(root->right, ans);
    // last me right walla part print kar do 
    rightTraversal(root->right, ans);
    return ans;

}
void print(Node* &root)
{
    // base case 
    if(root == NULL)
    {
        return;
    }
    print(root->left);
    cout << root->data << " ";
    print(root->right);
}
int main()
{
 Node* root = NULL;
 cout << "Enter the data for root node" << endl;
 buildtree(root);
 print(root);   
 cout << endl;
 vector<int> ans;
 ans = bndrTraversal(root, ans);
 for(auto i: ans)
 {
    cout << i << " ";
 }
}

