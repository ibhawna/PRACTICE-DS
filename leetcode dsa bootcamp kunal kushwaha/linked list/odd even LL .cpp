class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL){
            return head;
        }
        ListNode* odd = head;
        if(odd->next == NULL){
            return head;
        }
        ListNode* even = head->next;
        ListNode* h1 = even;
        while(even and even->next){
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
        odd->next = h1;
        return head;
        
    }
};