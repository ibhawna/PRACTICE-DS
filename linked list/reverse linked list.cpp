class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr =head;
        ListNode* pre = NULL;
        ListNode* Next = head;
        while(curr){
            Next = Next->next;
            curr->next = pre;
            pre  =  curr;
            curr = Next;
            
        }
        return pre;
        
    }
};