 void deleteNode(ListNode* node) {
        ListNode* Next = node->next;
        *node = *Next;
        delete Next;
    }
    // copying next node data into node ad deleting node->next 
     *node = *Next => will copy data and pointer 
    this is equivalent to 
    node->val = node->next->val;
    node->next = node->next->next;