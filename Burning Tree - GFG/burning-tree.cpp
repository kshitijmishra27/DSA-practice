//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
      void make_parent(Node* root, unordered_map<Node*, Node*> &parent){
            
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            
            Node* node = q.front();
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
    
    void pre(Node* root, int t, Node* &target){
        
        if(root == NULL) return;
        if(root->data == t) target = root;
        
        pre(root->left, t, target);
        pre(root->right, t, target);
        
    }
  
    int minTime(Node* root, int t) 
    {
       
        Node* target;
        pre(root, t, target);
        
        unordered_map<Node*, Node*> parent;     
        make_parent(root, parent);
        
        queue<Node*> q;
        int dist = 0;  
        unordered_map<Node*,bool> vis;
        
        q.push(target);
        vis[target] = true;
        
        while(!q.empty()){
            
            dist++;
            
            int s = q.size();
            
            for(int i=0; i<s; i++){
                
                Node* node = q.front();
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
        
       

        return dist-1;
                
    }
};





























//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends