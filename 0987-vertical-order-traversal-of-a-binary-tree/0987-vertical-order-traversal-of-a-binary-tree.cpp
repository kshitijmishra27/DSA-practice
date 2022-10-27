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
    void preorder(TreeNode* node,int vertical,int level,map<int,map<int,multiset<int>>> &nodes){
        if(node == nullptr) return;
        
        nodes[vertical][level].insert(node->val);
        preorder(node->left,vertical-1,level+1,nodes);
        preorder(node->right,vertical+1,level+1,nodes);
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> nodes;
        preorder(root,0,0,nodes);
        vector<vector<int>> ans;
        
        for(auto &p:nodes){
            vector<int> col;
            for(auto &q:p.second){
                for(auto &it : q.second){
                    col.push_back(it);
                }
            }
            ans.push_back(col);
        }
        
        
        return ans;
    }
};