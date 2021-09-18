/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
static const auto fast=[](){ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return nullptr;}();
class Solution {
public:
    ListNode* removeElements(ListNode* head, int x) {
        //TWO POINTERS 
        if(head == NULL){
            return head;
        }
        if(head->next ==  NULL && (head->val) == x){
             ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
        if(head->next ==  NULL && (head->val) != x){
           
            return head;
        }
        ListNode* curr = head;
        ListNode* temp = head->next;
        
        while(curr){
            if((temp) && (temp->val == x)){
                
                ListNode* tempdel = temp;
                temp = temp->next;
                curr->next = temp;
                delete tempdel;
                
                if(curr-> val == x){
                    head = curr->next;
                   ListNode* headdel = curr;
                    curr = curr->next;
                    if(temp){
                        temp = temp->next;
                    }
                    
                    delete headdel;
     
                }          
            }
               
               else if((temp) && (temp -> val != x) ){
                   
                  if(curr-> val == x){
                    head = curr->next;
                   ListNode* headdel = curr;
                    curr = curr->next;
                    temp = temp->next;
                    delete headdel;
     
                }
                   
                   else if(curr->val != x){
                       curr = curr->next;
                       temp = temp->next;
                   }
               }
               
               else if(temp == NULL){
                   
                    
                  if(curr-> val == x){
                    head = curr->next;
                   ListNode* headdel = curr;
                    curr = curr->next;
                    
                    delete headdel;
     
                }
                   else{
                       curr = curr->next;
                   }
               }
               
        
               }
               
               
               return head;
        
        
            // SINGLE POINTER
        // if(head == NULL){
        //     return head;
        // }
        // ListNode* curr = head;
        // while(curr->next != NULL){
        //     if(curr->next->val == x){
        //         curr->next = curr->next->next;
        //     }
        //     else{
        //         curr = curr->next;
        //     }
        // }
        // if(head->val == x){
        //     head = head->next;
        // }
        // return head;
        
        
        // recursive
        
        //        if(head == NULL){
        //            return NULL;
        //        }
        // if(head->val == x){
        //     return removeElements(head->next, x);
        // }
        // head->next = removeElements(head->next, x);
        // return head;
        
	
}
               
    
};