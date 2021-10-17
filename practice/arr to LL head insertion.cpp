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
void insertathead(node** head, int val){
	node* ptr = new node(val);
	if(*head == NULL){
		*head = ptr;
		return;
	}
	ptr->next = *head;
	*head = ptr;
	
}

node* arraytolist(int arr[], int n){
	node* head = NULL;
	for(int i=0; i <n; i++){
		insertathead(&head, arr[i]);
	}
	return head;
}
int main() {
    int arr[5] = {5,4,3,2,1};
	int size = 5;
	node* head = arraytolist(arr, 5);
	display(head);
	return 0;
	
}