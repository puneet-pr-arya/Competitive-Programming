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
    int sum = 0;
    int sumOfLeftLeaves(TreeNode *root)
    {
        transverse(root);
        return sum;
    }
    void transverse(TreeNode *root)
    {
        if (root == NULL)
            return;

        if (root->left != NULL)
        {
            if (root->left->left == NULL && root->left->right == NULL)
            {
                sum = sum + root->left->val;
            }
            else
            {
                transverse(root->left);
            }
        }
        if (root->right != NULL)
        {
            if (root->right->left != NULL || root->right->right != NULL)
            {
                transverse(root->right);
            }
        }
    }
};