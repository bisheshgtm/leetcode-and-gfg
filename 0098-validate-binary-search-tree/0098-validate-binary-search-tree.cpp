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
    vector <int> inorder(TreeNode *root){
        vector <int>v;
        if(root==NULL)
            return v;
        vector<int>left=inorder(root->left);
        v.insert(v.end(),left.begin(),left.end());
        v.push_back(root->val);
        vector<int>right=inorder(root->right);
        v.insert(v.end(),right.begin(),right.end());
        return v;
    }
    bool isValidBST(TreeNode* root) {
        if (root==NULL){
            return true;
        }
        vector<int> v1=inorder(root->left);
        vector<int> v2=inorder(root->right);
        for (int i=0;i<v1.size();i++){
            if (v1[i]>=root->val){
                return false;
            }
        }
        for (int i=0;i<v2.size();i++){
            if (v2[i]<=root->val){
                return false;
            }
        }
        return isValidBST(root->left) && isValidBST(root->right);
    }
};