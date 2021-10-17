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
    bool hasCycle(ListNode *head) {
        if(head and head->next == NULL){
            return false;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(slow != fast){
            if(fast == NULL and fast->next == NULL){
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
        
        
        // 2
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                return true;
            }
            
        }
        return true;
        
        //hashing
        
        unordered_set<ListNode*>s;
        ListNode* ptr = head;
        while(ptr){
            if(s.find(ptr) != s.end()){
                return true;
            }
            s.insert(ptr);
            ptr = ptr->next;
        }
        return false;
        
        
    }
};


