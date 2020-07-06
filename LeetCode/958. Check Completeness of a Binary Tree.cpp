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
    bool isCompleteTree(TreeNode *root)
    {
        bool end = false;
        queue<TreeNode *> q1;
        q1.push(root);
        while (!q1.empty())
        {
            TreeNode *current_node = q1.front();
            q1.pop();
            if (current_node == NULL)
            {
                end = true;
            }
            else
            {
                if (end)
                {
                    return false;
                }
                q1.push(current_node->left);
                q1.push(current_node->right);
            }
        }
        return true;
    }
};