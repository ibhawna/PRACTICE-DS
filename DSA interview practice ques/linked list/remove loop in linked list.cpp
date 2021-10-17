// first step using hashing. when the node is visited again then makes its previous as NULL

//using two pointers
Node* slow = head;
Node* fast = head;
while(slow and fast and fast->next){
    slow = slow->next;
    fast = fast->next->next;
    if(slow == fast){
        break;
    }
}
if(slow == head){
    while(fast->next != slow){
        fast = fast->next;
    }
    fast->next = NULL;
}
else if(slow == fast){
    slow = head;
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
}
return 