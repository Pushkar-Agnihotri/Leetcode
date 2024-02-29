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
    bool isEvenOddTree(TreeNode* root) {
        queue <TreeNode* > q;
        q.push(root);
        TreeNode* current = q.front();
        bool even = true;
        int prev;
        while (!q.empty()){
        if(!even) prev = INT_MAX;
        else prev = INT_MIN;
        int size = q.size();
            while(size--){
                current = q.front();
                q.pop();
                if ((even && (current->val % 2 == 0 || current->val <= prev)) || 
                        (!even && (current->val % 2 == 1 || current->val >= prev))) {
                    return false;
                } 
                prev = current->val;
                if(current->left)
                q.push(current->left);
                if(current->right)
                q.push(current->right);
            }
            even = !even;
        }
        return true;
    }
};