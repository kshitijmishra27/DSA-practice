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
    
    void print(TreeNode* node, int level, vector<int> &ans){
        
        if(node == NULL) return;
        
        if(level == ans.size()) ans.push_back(node->val);
        
        print(node->right, level+1, ans);
        print(node->left, level + 1, ans);
        
    }
    
    vector<int> rightSideView(TreeNode* root) {
     
        vector<int> ans;
        
        if(root == NULL) return ans;
        
        print(root, 0, ans);
        
        return ans;
        
    }
};