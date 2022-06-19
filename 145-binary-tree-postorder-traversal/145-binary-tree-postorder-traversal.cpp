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
    
    void postorder(TreeNode* data, vector<int>&ans){
        
        if(data == NULL){
            return;
        }
        
        postorder(data->left, ans);
        postorder(data->right, ans);
        ans.push_back(data->val);
        
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        
        if(root == NULL){
            return ans;
        }
        
        postorder(root, ans);
        
        return ans;
        
    }
};