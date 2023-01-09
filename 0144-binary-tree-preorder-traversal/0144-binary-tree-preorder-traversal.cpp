#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
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
    vector<int> preorderTraversal(TreeNode* root) {
        init;
        vector<int> result;
        preorder(root, result);
        return result;
    }
    void preorder(TreeNode* root, vector<int>& result){
        if(root == nullptr) return;
        cout << root->val;
        result.push_back(root->val);
        preorder(root->left, result);
        preorder(root->right, result);
    }
};