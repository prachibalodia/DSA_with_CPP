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
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }

        int h1= minDepth(root->left);
        int h2= minDepth(root->right);

        if(h1 == 0 || h2==0){
            return h1+h2+1;
        }
        else{
            return 1+min(h1,h2);
        }
    }
};