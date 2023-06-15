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
    int maxLevelSum(TreeNode* root) {
        int ans=-1, l=0,maxSum=INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s= q.size();
            int temp=0;
            l++;
            for(int i=0;i<s;i++){
                TreeNode* node= q.front();
                q.pop();
                temp+= node->val;
                if(node->left)
                q.push(node->left);
                if(node->right)
                q.push(node->right);
            }

            if(maxSum<temp){
                maxSum=temp;
                ans=l;
            }
        }
        return ans;
    }
};