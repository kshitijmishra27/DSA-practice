//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    
    int prec(char x){
        
        if(x == '^'){
            return 3;
        }
        
        else if(x == '*' || x == '/'){
            return 2;
        }
        
        else if(x == '+' || x == '-'){
            return 1;
        }
        
        else{
            // if its not operator we are simply going to push the other operator in the stack
            return -1;
        }
        
    }
    
    string infixToPostfix(string s) {
        // Your code here
        
        string ans;
        stack<char> st;
        
        for(int i=0; i<s.size(); i++){
            
            if((s[i] >= 'a' && s[i] <='z') || (s[i] >= 'A' && s[i] <= 'Z')){
                ans += s[i];
            }
        
        else if(s[i] == '(') st.push(s[i]);
        
        else if(s[i] == ')'){
            
            while(!st.empty() && st.top() != '('){
                ans += st.top();
                st.pop();
            }
            
            // for removing the ( bracket
            if(!st.empty()) st.pop();
            
        }
        
        else{
                // for pushing or removing operator and checking the operator and its precendence        
            while(!st.empty() && prec(st.top()) >= prec(s[i]) ){
                ans += st.top();
                st.pop();
            }
            
// if top element has less precedence or its not the operator we will simply push it in the stack
            st.push(s[i]);
            
        }
    }
    
// if our loop is not  empty after every operation

    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    
    return ans;
        
    }
};

























//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends