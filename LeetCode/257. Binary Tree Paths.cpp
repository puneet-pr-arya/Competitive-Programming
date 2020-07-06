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
    vector<string> binaryTreePaths(TreeNode *root)
    {
        while (root->left || root->right)
        {
            if (root->left)
            {
                binaryTreePaths.push_back(root);
                return binaryTreePaths(root->left);
            }
            if (root->right)
            {
                binaryTreePaths.push_back(root);
                return binaryTreePaths(root->right);
            }
        }

        return binaryTreePaths;
    }
};