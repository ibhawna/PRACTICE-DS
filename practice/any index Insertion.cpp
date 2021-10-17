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
node* insertatany(node* head, int index, int val){
	int i = 1;
	node* add = new node(val);
	node* ptr = head;
	while( i != index){
		ptr = ptr->next;
		i++;
	}
	add->next = ptr->next;
	ptr->next = add;
	return head;

}
int main() {
    node* head = new node(5);
	node* second = new node(6);
	node* third = new node(7);
	node* four = new node(8);
	node* five = new node(9);
	second = head->next;
	third = second->next;
	four = third->next;
	five = four->next;
	head = insertatany(head, 4, 10);
	display(head);
	return 0;
	
}