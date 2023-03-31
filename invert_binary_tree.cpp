/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {

        //the intuition of this question is to swap the left and right node
        //of all the subsequent trees recursively

        //base case
        if(root == NULL){
            return NULL;
        }

        invertTree(root->left); //calling for left subtree
        invertTree(root->right); //calling for right subtree

        //swap the values
        TreeNode* temp= root->left;
        root->left= root->right;
        root->right= temp;

        return root;
    }
};