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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
         recursion(root, diameter);
       return diameter;
    }
private: 
    int recursion(TreeNode* root, int& diameter){
         //check for left height and right height for each node
        // final diameter is the maximum between the current diameter and lh+rh
        //1 + max(lh, rh) will be the maximum depth
        if(!root) return 0;
        int lh, rh;
        lh = recursion(root->left, diameter);
        rh = recursion(root->right, diameter);
        diameter = max(diameter, lh+rh);
        return 1 + max(lh, rh);
    }
};