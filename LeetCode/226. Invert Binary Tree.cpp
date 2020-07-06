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
    TreeNode *invertTree(TreeNode *root)
    {

        if (root == NULL)
            //When we hit the end we return the end and go to the swapping depth first this is going
            return root;

        auto rootLeft = invertTree(root->left);
        auto rootRight = invertTree(root->right);
        root->right = rootLeft;
        root->left = rootRight;

        return root;
    };
};