#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    // constructor
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
    // base case 
    if(data == -1)
    {
        return NULL;
    }
    cout <<"Enter the data for left node of " << root->data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for right node of " << root->data << endl;
    root->right = buildTree(root->right);
}
int hight(Node* &root)
{
    // base case 
    if(root == NULL)
    {
        return 0;
    }
    int left = hight(root->left);
    int right = hight(root->right);
    int ans = max(left, right) + 1;
    return ans;
}
// TC O(n*n)
int dimeter(Node* &root)
{
    if(root == NULL)
    {
        return 0;
    }
    int leftPart = dimeter(root->left);
    int rightPart = dimeter(root->right);
    int compinroot = hight(root->left) + hight(root->right) + 1;
    int ans = max(leftPart, max(rightPart, compinroot));
    return ans;
}
pair<int,int> dimeterMehtod(Node* &root)
{
    // base case 
    if(root == NULL)
    {
        pair<int, int> p = make_pair(0,0);
        return p;
    }
    pair<int,int> left = dimeterMehtod(root->left);
    pair<int, int> right = dimeterMehtod(root->right);
    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;
    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;
    return ans;
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
int main()
{
    cout << "Enter the root node data " << endl;
    Node* root = NULL;
    buildTree(root);
    cout << "The root data is " << root;
    print(root);
    // cout << "The dimeter is " <<  dimeter(root);
    // pair<int, int> ans;
    // ans = dimeterMehtod(root);
    // cout << "The dimeter is " << ans.first << endl;
    // cout << "The hight is " << ans.second << endl;

}