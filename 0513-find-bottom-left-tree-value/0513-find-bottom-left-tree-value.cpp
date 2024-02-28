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
    int findBottomLeftValue(TreeNode* root) {
        if(!root) return -1;
        queue <TreeNode*> q;
        q.push(root);
        int ans=0;
        while(!q.empty()){
            int leftmostval = q.front()->val;
            cout<<q.front()->val<<" ";
            TreeNode* current = q.front();
            q.pop();
            if(current->right){
                q.push(current->right);
            }
            if(current->left){
                q.push(current->left);
            }
            ans = current->val;
        }
        return ans;
    }
};