#include <iostream> 
#include <queue>
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
        this->right  = NULL;
    }
};
Node* buildTree(Node* root, int data)
{
    // base case  
    if(root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if(data < root->data)
    {
        root->left = buildTree(root->left, data);
    }
    else{
        root->right = buildTree(root->right, data);
    }
    return root;
}
void takingInput(Node* &root){
    cout << "Enter the root node" << endl;
    int data; 
    cin >> data;
    while(data != -1)
    {
        root = buildTree(root, data);
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
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }
}

// TC AND SC = O(N) 
bool isPresent(Node* root, int element)
{
    if(root == NULL)
    return false;
    if(root->data == element)
    return true;
    if(root->data > element)
    {
      return isPresent(root->left, element);
    }
    else {
       return isPresent(root->right, element);
    }
    return false;
}

// TC = O(N) SC = constant 
bool isPresentM2(Node* root, int element){
    Node* temp = root;
    while(temp != NULL)
    {
        if(temp->data == element)
        {
            return true;
        }
        if(temp->data > element){
            temp = temp->left;
        }
        else{
            temp = temp->right;
        }
    }
    return false;
}

int main()
{
    Node* root = NULL;
    takingInput(root);
    levelOrderTraversal(root);
    cout << isPresentM2(root, 5);
}