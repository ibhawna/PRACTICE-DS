// insert at end
#include <iostream>
using namespace std;
class node{
public: 
int data;
node* next;
node(int val){
	data = val;
	next = NULL;
}

};
void display(node* head){
	node* ptr = head;
	while(ptr != NULL){
		cout<<ptr->data<<" -> ";
		ptr = ptr->next;
	}
	cout<<"NULL";
}
void insertatend(node** head, int val){
	node* ptr = new node(val);
	node* ptr2;
	if(*head == NULL ){
		*head = ptr;
		return;
	}
	ptr2 = *head;
	while(ptr2->next != NULL){
		ptr2 = ptr2->next;
	}
	ptr2->next = ptr;
}
node* arraytolist(int arr[], int n){
	node* head = NULL;
	for(int i=0; i <n; i++){
		insertatend(&head, arr[i]);
	}
	return head;
}
int main() {
    int arr[5] = {1,2,3,4,5};
	int size = 5;
	node* head = arraytolist(arr, 5);
	display(head);
	return 0;
	
}


