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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* h1 = list1;
        ListNode* h2 = list2;
        ListNode* A = list1;
        ListNode* B = list1;
        int i  = 0;
        while(i != b){
            B = B->next;
            i++;
        }
        i = 0;
        while(i != a){
            A = A->next;
            i++;
        }
        while(h1->next != A){
            h1 = h1->next;
        }
        
        h1->next = h2;
        while(h2->next != NULL){
            h2 = h2->next;
        }
        h2->next = B->next;
        return list1;
        
        
    }
};