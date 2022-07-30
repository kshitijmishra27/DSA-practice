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
    
    int length(ListNode* head){
        
        ListNode*temp = head;
        
        int cnt  = 0;
        
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        
        return cnt;
        
    }
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
         ListNode* head1 = list1 ;
         ListNode* head2 = list2;
         ListNode* dummy = new ListNode(-1);
         
        ListNode* temp = dummy;
        
        int a = length(list1);
        int b = length(list2);
        
        if(a == 0 && b == 0){
            return NULL;
        }
       
        while(head1 != NULL && head2 != NULL){
            
            if(head1->val <= head2->val){
                temp->next = head1;
                head1 = head1->next;
            }
            else{
                temp->next = head2;
                head2 = head2->next;
            }
            
            temp = temp->next;

        }
        
        if(head1 != NULL){
            temp->next = head1;
        }  
       else if(head2 != NULL){
            temp->next  = head2;
        }
        
        return dummy->next;
        
    }
};