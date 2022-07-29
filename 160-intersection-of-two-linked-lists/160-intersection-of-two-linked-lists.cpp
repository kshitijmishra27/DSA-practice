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
    
    int length( ListNode *head){
        
         ListNode *temp = head;
        
        int cnt  = 0;
        
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        
        return cnt;
        
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            
         int a = length(headA);
         int b = length(headB);
         int d;
        
        ListNode * ptra ;
             ListNode * ptrb ;   
        
        if(a > b){
              ptra = headA;
              ptrb = headB;   
            d = a-b;
        }
        else{
            d = b-a;
              ptra = headB;
              ptrb = headA;
        }
        
    while(d--){
        
        if(ptra != NULL)
        ptra = ptra->next;
        
        else{
            return NULL;
        }
        
    }      
        
        while(ptra != NULL && ptrb != NULL){
            
            if(ptra == ptrb){
                return ptra;
            }        
            else{
                ptra = ptra->next;
                ptrb = ptrb->next;
            }
                   
        }
        
        return NULL;
        
    }
};