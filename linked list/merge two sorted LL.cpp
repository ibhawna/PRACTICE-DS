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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* d = new ListNode(-1);
        ListNode* h1 = l1;
        ListNode* h2 = l2;
        ListNode* prev = d;
        while( h1 != NULL && h2 != NULL){
            if(h1 -> val > h2->val){
                prev->next = h2;
                
                h2 = h2->next;
            }
               else{
                   prev->next = h1;
                  
                   h1 = h1->next;
               }
            prev =prev->next;
        }
        
        while(h1 != NULL){
            prev->next = h1;
            h1 = h1->next;
            prev = prev->next;
        }
        while(h2 != NULL){
            prev->next = h2;
            h2 = h2->next;
            prev = prev->next;
        }
        // prev->next = (h1 != NULL) ? h1 : h2;
        return d->next;        
               
    }
};