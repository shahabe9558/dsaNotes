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
        int leftdata;
        cin >> leftdata;
        if(leftdata != -1)
        {
            temp->left = new Node(leftdata);
            q.push(temp->left);
        }
        cout << "Enter the data for right node of " << temp->data << endl;
        int rightdata;
        cin >> rightdata;
        if(rightdata != -1)
        {
            temp->right = new Node(rightdata);
            q.push(temp->right);
        }
    }
}
void print(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    print(root->left);
    cout << root->data << " ";
    print(root->right);
}


int height(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left, right) + 1;
    return ans;
}
bool isBalanced(Node* root)
{
    // base case 
    if(root == NULL)
    {
        return true;
    }
    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);
    bool diff = height(root->left) - height(root->right) <= 1;
    if(left && right && diff)
    {
        return 1;
    }else{
        return 0;
    }
}
pair<bool, int> isBalancedM2(Node* root)
{
    // base case 
    if(root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    pair<bool, int> left = isBalancedM2(root->left);
    pair<bool, int> right = isBalancedM2(root->right);
    bool leftAns = left.first;
    bool rightAns = right.first;
    bool diff = left.second - right.second <= 1;
    pair<bool, int> ans;
    ans.second = max(left.second, right.second) + 1;
    if(leftAns && rightAns && diff)
    {
        ans.first = true;
    }
    else{
        ans.first = false;
    }
    return ans;
}
int main()
{
    cout << "Enter the root element " << endl;
    Node* root = NULL;
    buildTree(root);
    cout << "The root is " << root << endl;
    print(root);
    cout << endl;
    pair<bool, int> ans; 
    ans = isBalancedM2(root);
    cout << "is balanced " << ans.first << endl;
    cout << "Height is  " << ans.second << endl;
}