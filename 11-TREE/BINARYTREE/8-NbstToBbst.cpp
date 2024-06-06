class Solution{
    
    public:
    void inorder(Node* root, vector<int> &v){
        // base case 
        if(root == NULL)
        return;
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }
    Node* buildTree(vector<int> &v, int s, int e){
        // base case 
        if(s > e)
        return NULL;
        int mid = (s + e) / 2;
        Node* newNode = new Node(v[mid]);
   
        return newNode;
    }
    Node* buildBalancedTree(Node* root)
    {
    	vector<int> v;
    	inorder(root, v);
    	int s = 0;
    	int e = v.size()-1;
    	Node* ans = buildTree(v, s, e);
    	return ans;
    }
};