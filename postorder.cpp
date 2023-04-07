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
//approach 1
    vector<int> v;
    void postorder(TreeNode* root){
        if(root == NULL){
            return;
        }
        postorder(root->left);
        postorder(root->right);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return v;
    }

    //approach 2
    // vector<int> v;
    // vector<int> postorderTraversal(TreeNode* root) {
        
    //     if(root != NULL){
    //         postorderTraversal(root->left);
    //         postorderTraversal(root->right);
    //         v.push_back(root->val);

    //     }
    //     return v;
    // }
};