// usig map

map<int, int> mp;
Node* curr  = head;
m[curr->val] = 1;
Node* prev = curr;
curr = curr->next;
while(curr != NULL){
    if(m[curr->data]){
        prev->next = curr->next;
        free(curr);
    }
    else{
        m[curr->data] = 1;
        prev = curr;
    }
    curr = prev->next;
}

//main intutio to skip ad then delete the repeated node element