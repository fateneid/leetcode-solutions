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
    int sumRootToLeaf(TreeNode* root) {
        if (!root) return 0;
        int total = 0, curr = 0;
        traverse(root, curr, total);
        return total;
    }
    void traverse(TreeNode* node, int curr, int& total) {
        if (!node) return;
        curr = (curr << 1) | node->val;
        if (!node->left && !node->right) {
            total += curr;
            return;
        }
        TreeNode* left = node->left;
        TreeNode* right = node->right;
        if (left) traverse(left, curr, total);
        if (right) traverse(right, curr, total);
    }
};
