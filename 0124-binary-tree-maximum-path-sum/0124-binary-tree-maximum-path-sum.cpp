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
    int maxsum(TreeNode *root,int &ans){
        if (root==NULL){
            return 0;
        }
        int left=maxsum(root->left,ans);
        int right=maxsum(root->right,ans);
        int temp=max(max(left,right)+root->val,root->val);
        int ans1=max(temp,left+right+root->val);
        ans=max(ans,ans1);
        return temp;
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN; 
        maxsum(root,ans);
        return ans;
        
    }
};