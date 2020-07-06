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
    void flatten(TreeNode *root)
    {
        stack<TreeNode *> s;

        if (root == NULL)
            return;
        s.push(root);
        while (!s.empty())
        {
            auto current_node = s.top();
            s.pop();
            if (current_node->right != NULL)
            {
                s.push(current_node->right);
            }
            if (current_node->left != NULL)
            {
                s.push(current_node->left);
            }
            if (!s.empty())
            {
                current_node->right = s.top();
            }
            current_node->left = NULL;
        }
    }
};