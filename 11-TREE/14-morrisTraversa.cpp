void morrisTraversal(Node* root){
    while(root != NULL){
        // if left does not exist 
        if(root->left == NULL)
        {
            cout << root->data << " ";
            root = root->right;
        }
        // left exist hai 
        else{
            // inorder predecessor niklana hoga 
            Node* current = root->left;
            while(root->right && root->right != root){
                current= current->right;
            }
            if(current->right == root){
                current->right = NULL;
                root= root->right;
            }else{
                cout << root->data << " ";
                current->right = root;
                root = root->left;
            }
        }
    }
}