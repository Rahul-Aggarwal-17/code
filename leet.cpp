//Question link - https://leetcode.com/problems/binary-tree-level-order-traversal/
//Question description - Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).
// Language used- C++
// Code
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
 class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        // Base Case
    if (root == NULL)  return ans;
 
    // Create an empty queue for level order traversal
    queue<TreeNode *> q;
 
    // Enqueue Root and initialize height
    q.push(root);
        
    while (q.empty() == false)
    {    int sz=q.size();
     //create vector to store nodes of particular level
     vector<int>level;
       while(sz--)
       {// Push front of queue and remove it from queue
        TreeNode *node = q.front();
    level.push_back(node->val);
        q.pop();
 
        /* Enqueue left child */
        if (node->left != NULL)
            q.push(node->left);
 
        /*Enqueue right child */
        if (node->right != NULL)
            q.push(node->right);
       }
       ans.push_back(level);
    }
        return ans;
    }
};
