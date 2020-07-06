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
    unsigned long int maxWidth;
    unordered_map<int, int> m1;
    int widthOfBinaryTree(TreeNode *root)
    {
        maxWidth = 0;
        getWidth(root, 0, 0);
        return maxWidth;
    }
    void getWidth(TreeNode *root, unsigned long int depth, unsigned long int position)
    {
        if (root == NULL)
            return;
        if (!m1.count(depth))
        {
            m1[depth] = position;
        }
        maxWidth = max(maxWidth, position - m1[depth] + 1);
        getWidth(root->left, depth + 1, position * 2);
        getWidth(root->right, depth + 1, position * 2 + 1);
    }
};