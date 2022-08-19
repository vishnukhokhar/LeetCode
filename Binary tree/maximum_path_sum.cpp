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
    int maxPathSum(TreeNode *root)
    {
        int maxi = INT_MIN;
        movedown(root, maxi);
        return maxi;
    }

    int movedown(TreeNode *node, int &maxi)
    {
        if (node == NULL)
        {
            return 0;
        }
        int lh = max(0, movedown(node->left, maxi));
        int rh = max(0, movedown(node->right, maxi));
        maxi = max(maxi, rh + lh + node->val);
        return max(lh, rh) + node->val;
    }
};