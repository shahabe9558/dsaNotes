class Solution {
public:
    void inorder(TreeNode* root, vector<int> &v){
        if(root == NULL){
            return ;
        }
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
    bool solve(vector<int> v, int k){
        int size = v.size();
        int s = 0;
        int e = size-1;
        while(s < e){
            int sum = v[s] + v[e];
            if(sum == k)
            return true;
            else if(sum < k){
                s++;
            }
            else{
                e--;
            }
        }
        return false;
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> v;
        inorder(root, v);
        bool ans = solve(v,  k);
        return ans;
    }
};