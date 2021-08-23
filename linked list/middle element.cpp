class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* sp = head;
        ListNode* fp = head;
        while(fp and fp->next){
            
            sp = sp->next;
            fp = fp->next->next;
            
        }
      
        head = sp;
        return head;
    }
};