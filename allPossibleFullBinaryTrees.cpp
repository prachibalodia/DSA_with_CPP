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
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> ans;
        if(n%2 == 0) return {};
        if(n==1) ans.push_back(new TreeNode(0));
        for(int i=0;i<n-1;i++){
            vector<TreeNode*> l= allPossibleFBT(i);
            vector<TreeNode*> r= allPossibleFBT(n-i-1);

            for(TreeNode* lt: l){
                for(TreeNode* rt: r){
                    ans.push_back(new TreeNode(0,rt,lt));
                }
            }
        }
        return ans;
    }
};