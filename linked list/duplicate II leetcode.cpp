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
    ListNode* duplicate(ListNode* head){
        
    }
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        ListNode* pre = head;
        if(head == NULL){
            return head;
        }
        // head cases
        if(head->val == head->next->val){
            while(curr->val == curr->next->val){
                curr = curr->next;
            }
            curr = curr->next;
            head = curr;
        }
        // non head cases
        while(curr->next != NULL){
            
        }
        return head;
        
            
            
    }
};