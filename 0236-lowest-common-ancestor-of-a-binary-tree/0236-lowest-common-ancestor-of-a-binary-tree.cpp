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
public:
    
    TreeNode* solve(TreeNode* node, TreeNode* p, TreeNode* q){
 
    if(node == NULL || node == p || node == q){
        return node;
    }
        
        TreeNode* lh = solve(node->left, p, q);
        TreeNode* rh = solve(node->right, p,q);
        
        if(lh == NULL){
            return rh;
        }
        else if(rh == NULL){
            return lh;
        }
        else{
            return node;
        }
        
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        TreeNode* ans = solve(root, p, q);
        
        return ans;
        
    }
};