// NOT SO OPTIMAL APROACH, FAILS FOR LARGER K VALUES
class Solution {
public:
    ListNode* rotate(ListNode* head){
        ListNode* start = head;
        ListNode* prev = head;
        // ListNode* end = head;
        
        while(head->next != NULL){
            head = head->next;
        }
        while(prev->next != head){
            prev = prev->next;
        }
        prev->next = NULL;
        head->next = start;
        return head;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
       if(head == NULL){
           return head;
       }
        if(head ->next == NULL){
            return head;
        }
        
       for(int i =0; i<k; i++){
           head = rotate(head);
       }
        
        return head;
    }
};
