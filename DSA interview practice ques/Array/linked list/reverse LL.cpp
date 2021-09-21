list* curr = head;
list* pre = NULL;
list* Next = head;
while(curr - > next != NULL){
    Next =Next -> next;
    curr->next = pre;
    pre = curr;
    curr = Next;
}
return pre;
 