#include <bits/stdc++.h>
using namespace std;
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
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return createTree(nums, 0, nums.size() - 1);
    }
    TreeNode *createTree(vector<int> &nums, int left, int right)
    {
        int mid = (left + right) / 2;
        TreeNode *temp = new TreeNode(nums[mid]);

        if (left > right)
        {
            return NULL;
        }
        temp->left = createTree(nums, left, mid - 1);
        temp->right = createTree(nums, mid + 1, right);
        return temp;
    }
};