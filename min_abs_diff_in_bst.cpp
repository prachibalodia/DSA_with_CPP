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
    // void inorder(TreeNode* root, vector<int> &v){
        //T= O(N), S=O(N)
    //     if(root == NULL) return;
    //     inorder(root->left, v);

    //     v.push_back(root->val);
    //     inorder(root->right,v);
    // }
    int ans= INT_MAX;
    int prev= INT_MAX;
    void inorder2(TreeNode* root){
        //T= O(N), S= O(1)
        if(root->left != NULL){
            inorder2(root->left);
        }
        ans= min(ans, abs(prev-root->val));
        prev=root->val;

        if(root->right != NULL){
            inorder2(root->right);
        }
    }
    int getMinimumDifference(TreeNode* root) {
        //approach 1-> using an extra vector v
    //     vector<int>v;
    //     inorder(root,v);
    //     int d=abs(v[1]-v[0]);
    //     for(int i=2;i<v.size();i++){
    //         int dd=abs(v[i]-v[i-1]);
    //         d= min(d,dd);
    //     }
    //     return d;
    
    //approach 2
    inorder2(root);
    return ans;

    }
};