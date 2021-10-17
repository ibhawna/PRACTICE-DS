// LinkedList: 1->2->2->4->5->6->7->8
// K = 4
// Output: 4 2 2 1 8 7 6 5 


// recursive solution

class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node* current = head;
        node* prev = NULL;
        node* forward;
        int count = 0;
        while(current and count < k){
            forward = current->next;
            current->next = prev;
            prev = current;
            current = forward;
            
            count++;
        }
        if(forward != NULL){
            head->next = reverse(forward, k);
        }
        return prev;
    }
};