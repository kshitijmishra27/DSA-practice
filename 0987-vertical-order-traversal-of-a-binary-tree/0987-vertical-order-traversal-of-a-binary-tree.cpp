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
    
    void preorder(TreeNode* node, int vertical, int level,  map<int, map<int,multiset<int>>> &nodes){
        
        if(node == NULL) return;
        
        nodes[vertical][level].insert(node->val);
        preorder(node->left, vertical-1, level+1, nodes);
        preorder(node->right, vertical+1, level+1, nodes);
        
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        
        map<int, map<int,multiset<int>>> nodes;
        preorder(root, 0 , 0, nodes);
        
    for(auto &v : nodes){   // verticals
        
        vector<int> temp;
        
        for(auto &level : v.second){  // levels in that vertical
            
           for(auto &node : level.second){  //nodes in multiset(level)
               temp.push_back(node);
           }  
        }
        
        ans.push_back(temp);
                
    }  
        
        return ans;
        
    }
};