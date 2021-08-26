//more optimal
ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        int i = 1;
        while(i <= n){
            fast = fast->next;
            i++;
        }
        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return dummy->next; //balance the case where n = no of nodes
    }



    
// less optimal
ListNode* removeNthFromEnd(ListNode* head, int n) {
        if( head == NULL){
            return head;
        }
        
        ListNode* countll = head;
        int N =0;
        while(countll != NULL){
            countll = countll->next;
            N++;
        }
        if(n == N){
            head = head->next;
            return head;
        }
        ListNode* d = head;
        ListNode* skip = head;
        if(n == 1){
            while(skip->next->next != NULL){
                skip = skip->next;
            }
            skip->next = NULL;
        }
        else{
            int i = 1;
            int pos = N-n+1;
            while( i != (pos-1)){
                d = d->next;
                
                i++;
            }
            cout<<d->val<<" 3"<<endl; 
            d->next= d->next->next;
            cout<<d->val<<" 5"<<endl;
        }
        
        return head;
    }