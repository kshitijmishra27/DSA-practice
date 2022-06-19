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
    
 
    
    vector<int> preorderTraversal(TreeNode* root) {
        
      stack<TreeNode*> st;
      vector <int> ans;
        
        if(root==NULL){
            return ans;
        }
    
        st.push(root);
        
        while(!st.empty()){
            
            TreeNode* node = st.top();
            st.pop();
            
            if(node->right != NULL) st.push(node->right);
            if(node->left != NULL) st.push(node->left);
            
            ans.push_back(node->val);       
                
        }
        
        return ans;
        
    }
};