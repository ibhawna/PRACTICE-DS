 int getDecimalValue(ListNode* head) {
        int ans = 0;
        while(head){
            ans = ans*2 + head->val;
            head =head->next;
        }
        return ans;
    }

    // recursive
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
    int ans = 0;
    int getDecimalValue(ListNode* head) {
        // int ans = 0;
        // while(head){
        //     // ans = (ans<<1);
        //     // ans = ans | head->val;
        //     ans = ans*2 + head->val;
        //     head =head->next;
        // }
        // return ans;
        if(head == NULL){
            return ans;
        }
        else{
            ans =  (ans*2 + head->val);
            getDecimalValue(head->next);
        }
       return ans;
        
    }
};