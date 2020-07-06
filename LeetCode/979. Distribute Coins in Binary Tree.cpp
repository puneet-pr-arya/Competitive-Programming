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
    int totalMoves;
    int distributeCoins(TreeNode *root)
    {
        totalMoves = 0;
        transverse(root);
        return totalMoves;
    }
    int transverse(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int left = transverse(root->left);
        int right = transverse(root->right);
        totalMoves += abs(left) + abs(right);
        return left + right + root->val - 1;
    }
};