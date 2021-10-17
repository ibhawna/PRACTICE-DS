if(head and head->next){
    return NULL; //no loop hence no first node
}
Node* slow = head;
Node* fast = head;
while(slow and fast and fast->next){
    slow = slow->next;
    fast = fast->next->next;
    if(slow == fast){
        break;
    }
}
if(slow != fast){
    return NULL; //no loop hence no first node
}
slow = head;
//there is loop
while(slow != fast){
    slow = slow->next;
    fast = fast->next;
}
// in the end both will point to first node, return any of them
return slow;