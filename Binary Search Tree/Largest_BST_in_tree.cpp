#include<bits/stdc++.h>
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
class NodeVal {
public:
    int minNode,maxNode,maxSize;
    NodeVal(int minNode,int maxNode,int maxSize)
    {
        this->minNode=minNode;
        this->maxNode=maxNode;
        this->maxSize=maxSize;
    }
};


class Solution {
    private:
    
   NodeVal maxSumBSThelper(TreeNode* root)
    {
        if(!root)
        {
            return NodeVal(INT_MAX,INT_MIN,0);
        }
        
        auto left=maxSumBSThelper(root->left);
        auto right=maxSumBSThelper(root->right);
        
        if(left.maxNode<root->val && root->val < right.minNode)
        {
            return NodeVal(min(root->val, left.minNode), max(root->val,right.maxNode), (left.maxSize+right.maxSize+1));
        }
            
            else
            {
                return NodeVal(INT_MIN,INT_MAX,max(left.maxSize,right.maxSize));
            }
        }
    
public:
    int maxSumBST(TreeNode* root) {
        return maxSumBSThelper(root).maxSize;
        
    }
};
