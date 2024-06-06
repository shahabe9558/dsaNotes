class Solution {
  public:
    bool isHeapD(struct Node* root){
        // base case if leaf node
        if(root->left == NULL && root->right == NULL){
            return true;
        }
        if(root->right == NULL){
            return root->data > root->left->data;
        }
        else{
            bool left = isHeapD(root->left);
            bool right = isHeapD(root->right);
            return (left && right && 
            (root->data > root->left->data &&
            root->data > root->right->data));
        }
    }
    int nodeCount(struct Node* root){
        if(root == NULL){
            return 0;
        }
        int ans = 1 + nodeCount(root->left) + nodeCount(root->right);
        return ans;
    }
    bool isCBT(struct Node* root, int index, int cnt){
        // base case 
        if(root == NULL){
            return true;
        }
        if(index > cnt){
            return false;
        }
        bool left = isCBT(root->left, 2*index+1, cnt); 
        bool right = isCBT(root->right, 2*index+2, cnt); 
        return left && right;
    }
    bool isHeap(struct Node* tree) {
        int index = 0;
        int nodeCnt = nodeCount(tree);
        bool ans = isCBT(tree, index, nodeCnt) && isHeapD(tree) ;
        return ans;
    }
};