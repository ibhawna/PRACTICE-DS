class Solution {
public:
    ListNode* sum(ListNode* head1, ListNode* head2, int carry){
        if(head1 == NULL && head2 == NULL){
            if(carry > 0){
                return new ListNode(carry);
            }
            else{
                return NULL;
            }
            
        }
        int s1 = head1 != NULL ? head1->val : 0;
        int s2 = head2 != NULL ? head2->val : 0;
        int add = (s1 + s2 + carry) % 10;
         carry = (s1 + s2 + carry)/10;
        ListNode* ans = new ListNode(add);
        ListNode* Next1 = head1 != NULL ? head1->next : NULL;
        ListNode* Next2 = head2 != NULL  ? head2->next : NULL; 
        ans -> next = sum(Next1, Next2, carry);
        return ans;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       return sum(l1, l2, 0);
        
 
    }
};