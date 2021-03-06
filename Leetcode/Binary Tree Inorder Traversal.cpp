/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void inO(TreeNode* root, vector< int > &v){
        if (root != NULL){
            inO(root->left, v);
            v.push_back(root->val);
            inO(root->right, v);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inO(root, res);
        return res;
    }
};