
list* slow = head;
list* fast = head->next;
while(fast->next != NULL or fast != NULL){
    slow = slow->next;
    fast = fast->next->next;
}
return slow;

or

count the nodes and mid = count / 2