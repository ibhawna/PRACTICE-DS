2 -> 2 -> 4 -> 5 -> 5 -> 7 -> 8
op = 2 ->4 ->5 ->7 ->8
// SORTED LINKED LIST

//o(1) using a pointer
 ListNode* deleteDuplicates(ListNode* head) {
        if(head  == NULL){
            return NULL;
        }
        ListNode* ptr = head;
        while(ptr->next != NULL){
            if(ptr->val == ptr->next->val){
                ListNode* del = ptr->next;
                ptr->next = ptr->next->next;
                delete del;
            }
            else{
                ptr = ptr->next;
            }
        }
        return head;
    }

// using hashing. storing elements and if some one count is more than one, point it to next of it.

unordered_set<int> s;
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr != NULL){
            if(s.find(curr->val) != s.end()){
                ListNode* del = curr;
                prev->next = curr->next;
                curr = prev->next;
                delete del;
            }
            else{
                s.insert(curr->val);
                prev = curr;
                curr = curr->next;
            }
            curr = prev->next;
        }
        return head;