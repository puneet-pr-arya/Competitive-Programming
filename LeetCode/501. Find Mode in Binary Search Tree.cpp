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
    int prev = INT_MIN;
    int count = 1;
    int max = 0;
    vector<int> findMode(TreeNode *root)
    {

        vector<int> v1;

        transv(root, v1);

        return v1;
    }

    void transv(TreeNode *root, vector<int> &v1)
    {
        if (root == NULL)
            return;
        transv(root->left, v1);

        if (prev != INT_MIN)
        {
            if (prev == root->val)
            {
                count++;
            }
            else
            {
                count = 1;
            }
        }

        if (count > max)
        {
            max = count;
            v1.clear();
            v1.push_back(root->val);
        }
        else if (count == max)
        {
            v1.push_back(root->val);
        }
        prev = root->val;
        transv(root->right, v1);
    }
};