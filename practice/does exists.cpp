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
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
}
bool doesnodeexists(node* head, int x){
	if(head == NULL){
		cout<<"node doest exist";
	}
	node* ptr = head;
	while(ptr != NULL){
		if(x == ptr->data){
			return true;
		}
		ptr = ptr->next;
	}
	return false;
}
int main() {
    node* first = new node(5);
	node* second = new node(6);
	node* third = new node(7);
	node* head = first;
	first->next = second;
	second->next = third;
	display(head);
	bool exist = doesnodeexists(head,9);
	cout<<exist;
	return 0;
	
}