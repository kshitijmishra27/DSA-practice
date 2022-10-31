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
    
    void make_parent(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &parent){
            
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            
            TreeNode* node = q.front();
            q.pop();
            
            if(node->left){
                parent[node->left] = node;
                q.push(node->left);
            }
            
            if(node -> right){
                parent[node->right] = node;
                q.push(node->right);
            }
        }
        
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
     
        vector<int> ans; 
        if(root == NULL) return ans;
        
        unordered_map<TreeNode*, TreeNode*> parent;     
        make_parent(root, parent);
        
        queue<TreeNode*> q;
        int dist = 0;  
        unordered_map<TreeNode*,bool> vis;
        
        q.push(target);
        vis[target] = true;
        
        while(!q.empty()){
            
            if(dist++ == k) break;
            
            int s = q.size();
            
            for(int i=0; i<s; i++){
                
                TreeNode* node = q.front();
                q.pop();
                
                if(node -> left && !vis[node->left]){
                    q.push(node->left);
                    vis[node->left] = true;
                }
                 if(node->right && !vis[node->right]){
                    q.push(node->right);
                     vis[node->right] = true;
                }
                 if(!vis[parent[node]] && parent[node]){
                     q.push(parent[node]);
                     vis[parent[node]] = true;
                 }
                
            }
        }
        
        while(!q.empty()){
            
            TreeNode* node = q.front();
            q.pop();
            
            ans.push_back(node->val);
            
        }   

        return ans;
    }
};