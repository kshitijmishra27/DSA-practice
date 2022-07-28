/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    int counter(ListNode* &head){
        
        int cnt = 0;
        
        ListNode* temp = head;
        
        while(temp != NULL){
            
            temp = temp->next;
            cnt++;
        }
        
        return cnt;
        
    }
    
     ListNode* reverse( ListNode* &head, int k, int no_of_nodes_left){
    
         if(no_of_nodes_left < k){
             return head;
         }
         
          ListNode* prevptr = NULL;
          ListNode* currptr = head;
          ListNode* nextptr ;
         
         int cnt = 0;
         
         while(currptr != NULL && cnt < k){
             
             nextptr = currptr->next;
             currptr->next = prevptr;
             
             prevptr = currptr;
             currptr = nextptr;
             
             cnt++;    
         }
         
         if(nextptr != NULL)
         head->next = reverse(nextptr, k, no_of_nodes_left - k);
         
         return prevptr;
         
     }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
  
         ListNode* ans = reverse(head, k, counter(head));
        
        return ans;
        
    }
};