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
class Solution
{
public:
    bool isUnivalTree(TreeNode *root)
    {
        bool left = root->left == NULL || root->left->val == root->val && isUnivalTree(root->left);
        bool right = root->right == NULL || root->right->val == root->val && isUnivalTree(root->right);
        return left && right;
    }
};