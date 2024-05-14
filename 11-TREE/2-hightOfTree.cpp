
// pair<int, int>dimeterFast(Node* root)
// {
//     if(root == NULL)
//     {
//         pair<int, int> p = make_pair(0, 0);
//         return p;
//     }
//     pair<int, int> left = dimeterFast(root->left);
//     pair<int, int> right = dimeterFast(root->right);

//     int opt1 = left.first;
//     int opt2 = right.first;
//     int opt3 = left.second + right.second + 1;
//     pair<int, int>ans;
//     ans.first = max(opt1, max(opt2, opt3));
//     ans.second = max(left.second, right.second) + 1;
//     return ans;

// }
// // TC O(n*n)
// int diameter(Node* &root)
// {
//     return dimeterFast(root).first;
//     // cout << "Hight is = " << dimeterFast(root).second;
//     // if(root == NULL)
//     // return 0;
//     // int opt = diameter(root->left);
//     // int opt2 = diameter(root->right);
//     // int opt3 = hightOfTree(root->left) + hightOfTree(root->right) + 1;
//     // int ans = max(opt, max(opt2, opt3));
//     // return ans;
#include <iostream>
#include <queue>
using namespace std;
class Node{
    public :
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
void buildTree(Node* &root)
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
int hightOfTree(Node* &root)
{
    // base case 
    if(root == NULL)
    {
        return 0;
    }
    // nahi to left part calculate kar lo 
    int left = hightOfTree(root->left);
    int right = hightOfTree(root->right);
    int ans = max(left, right) + 1;
    return ans;
}
int main()
{
    cout << "Enter the data for root node " << endl;
    Node* root = NULL;
    buildTree(root);
    cout <<"The height of the tree is " << hightOfTree(root);
}