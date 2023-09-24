/*
 * @lc app=leetcode.cn id=236 lang=cpp
 *
 * [236] 二叉树的最近公共祖先
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    // 没过的案例: [3,5,1,6,2,0,8,null,null,7,4] \n 5 \n 4
    // ea: 5 an: 3
private:
    bool get_p = false; 
    bool get_q = false; 

    // 一个节点如果左右分别有节点,就是最近父节点
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return dfs(root, p, q);
    }

    TreeNode* dfs(TreeNode* node, TreeNode*p, TreeNode*q) {
        if (node == p) get_p = true;
        if (node == q) get_q = true;
        if (node==nullptr) {return nullptr;};
        
        TreeNode* right = dfs(node->right, p, q);
        TreeNode* left = dfs(node->left, p, q);
         
        if (get_p && get_q) {return node;}

        return right == nullptr? left: right;
    }
};
// @lc code=end

