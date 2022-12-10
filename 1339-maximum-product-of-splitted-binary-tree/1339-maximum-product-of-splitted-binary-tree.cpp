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
    long long total=0;
    long long ans=0;
    long long int sum(TreeNode* root){
        if (root==NULL){
            return 0;
        }
        long long Sum=root->val+sum(root->left)+sum(root->right);
        ans = max(ans, (total-Sum)*Sum);
        return Sum;
    }
    
    int maxProduct(TreeNode* root) {
        total=sum(root);
        sum(root);
        return ans%1000000007;
    }
};