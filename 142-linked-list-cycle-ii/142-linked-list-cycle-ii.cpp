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
                
                fast = head;   // fast ko wapas pakadke head me dalo
                
                while(fast != slow){   // jaise hi dubara mile thats the exact place where cycle starts
                    
                    slow = slow->next;   // ko isbaar same time badhao
                    fast = fast->next;
                    
                }
                
                return slow;   // return either fast or slow same result aaayega
                            // because dono hi same jagah ko point kar rehe jaha cycle shuru hai
            }   
            
        }
        
        // loop khatam matlab cycle tha hi nhi 
    
       return NULL;
        
    }
};