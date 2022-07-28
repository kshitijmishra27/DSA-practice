/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    
    
    ListNode *detectCycle(ListNode *head) {
    
         ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL && fast->next != NULL){
            
            fast = fast->next->next;   // khargosh = 2 steps
            slow = slow->next;      // tortoise     = 1 stpes
            
            if(fast == slow){  // agar cycle hai tabhi fast and slow wil be eqal
                
                fast = head;
                
                while(fast != slow){
                    
                    slow = slow->next;
                    fast = fast->next;
                    
                }
                
                return slow;
                
            }   
            
        }
        
        // loop khatam matlab cycle tha hi nhi 
    
       return NULL;
        
    }
};