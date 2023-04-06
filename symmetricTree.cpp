class Solution{
    public:
    bool isSymmetricHelper(TreeNode* leftnode, TreeNode* rightnode){
        if(leftnode == NULL && rightnode == NULL){
            return true;
        }
        if(leftnode == NULL || rightnode== NULL || leftnode->data != rightnode->data){
            return false;
        }

        return isSymmetricHelper(leftnode->left, rightnode->right) && isSymmetricHelper(leftnode->right, rightnode->left);

    }
    bool isSymmetric(TreeNode* root){
    if(root == NULL){
        return true;
    }

    return isSymmetricHelper(root->left, root->right);
}
};


