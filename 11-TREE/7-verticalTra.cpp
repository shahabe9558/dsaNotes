#include <iostream>
#include <queue>
#include <map>
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
void buildTree(Node* &root)
{
    int data;
    cin >> data;
    queue<Node*> q;
    root = new Node(data);
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
        cin >>rightData;
        if(rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}
void print(Node* &root)
{
    if(root == NULL)
    {
        return;
    }
    print(root->left);
    cout << root->data << " ";
    print(root->right);
}
vector<int> VerticalTraversal(Node* &root){
    vector<int> ans;
    if(root == NULL)
    {
        return ans;
    }
    map<int, map<int, vector<int>>> nodes;
    queue<pair<Node*, pair<int, int>>> q;
    q.push(make_pair(root, make_pair(0, 0)));
    while(!q.empty())
    {
        pair<Node*, pair<int,int>> temp = q.front();
        q.pop();
        Node* frontNode = temp.first;
        int hd = temp.second.first;
        int lvl = temp.second.second;
        nodes[hd][lvl].push_back(frontNode->data);
        if(frontNode->left)
        {
            q.push(make_pair(frontNode->left, make_pair(hd - 1, lvl + 1)));
        }
        if(frontNode->right)
        {
            q.push(make_pair(frontNode->right, make_pair(hd+1, lvl+1)));
        }
    }
    for(auto i : nodes)
    {
        for(auto j : i.second)
        {
            for(auto k : j.second)
            {
                ans.push_back(k);
            }
        }
    }
    return ans;
}
int main()
{
    cout << "Enter the root element " << endl;
    Node* root = NULL;
    buildTree(root);
    // print(root);
    cout << "The vertical traversal is " << endl;
    vector<int> ans = VerticalTraversal(root);
    for(auto i : ans)
    {
        cout << i << " ";
    }
}