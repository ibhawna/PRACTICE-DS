ListNode* leftnode = head;
        ListNode* leftprev;
        int count = 1;
        
        while(leftnode and count < left){
            leftprev = leftnode;
            leftnode = leftnode->next;
            count++;
        }
        
        //reverse 
		
        ListNode* prev = NULL;
        ListNode* forward = NULL;
        ListNode* current = leftnode;
        while(current and count <= right){
            forward = current->next;
            current->next = prev;
            prev = current;
            current = forward;
            count++;
        }
       
	   // as leftprev == leftnode here. 
        if(left == 1){
            head = prev;
        }
        
        else{
            leftprev->next = prev;
        }
       
        leftnode->next = current;
        
        return head;