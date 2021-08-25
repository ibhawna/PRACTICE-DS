//swapping nodes not just values => best ans refer : https://leetcode.com/problems/swapping-nodes-in-a-linked-list/discuss/1110017/C%2B%2B-Single-Pass-2-Pointer-Solution-Explained-~100-Time-~95-Space
    // TWO POINTERS APPROACH
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* slow =head;
        ListNode* fast = head;
        ListNode* first = head;
        ListNode* second = head;
        int i = 0; 
        while(i != k-1){
            fast = fast->next;
            i++;
        }
        first = fast;
        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        second = slow;
        // swapping values not nodes
        swap(first->val, second->val);
        return head;
        
    }
        
        
        
        
        
        
        
        
        
        // o(n) space
        LL => ARRAY => SWAP => LINKED LIST
            void insert(ListNode** root, int item)
{
    ListNode* temp = new ListNode;
    temp->val = item;
    temp->next = *root;
    *root = temp;
}
ListNode* swapNodes(ListNode* head, int k){
        int N = 0;
        ListNode* count = head;
        while( count != NULL){
            count = count->next;
            N++;
        }
        ListNode* newhead = head;
        vector<int> arr(N+1);
        int i = 1;
        while(newhead != NULL){
            arr[i] = newhead->val;
            newhead = newhead->next;
            i++;
        }
        for(int i = 1; i<=N; i++){
            cout<<arr[i]<<" ";
        }
        int start = k;
        int end = N-k+1;
        swap(arr[start], arr[end]);
        ListNode* root = NULL;
        for(int i = N; i >= 1 ; i--){
            insert(&root, arr[i]);
        }
        
        
     
        return root;
    }
