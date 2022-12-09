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
    int difference(TreeNode *root,int minimum,int maximum){
        if (root==NULL){
            return maximum-minimum;
        }
        minimum=min(minimum,root->val);
        maximum=max(maximum,root->val);
        return max(difference(root->left,minimum,maximum),difference(root->right,minimum,maximum));
    }
    
    
    int maxAncestorDiff(TreeNode* root) {
        if(root == NULL) return 0;
        return difference(root, root->val, root->val);
    }
};