#include<iostream>
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
void insertarend(node*  &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void insertathead(node* &head, int val){
    node* n =new node(val);
    n->next = head;
    head = n;

}
int main(){
    node* head = NULL;
    insertarend(head, 1);
    insertarend(head, 2);
    insertarend(head, 3);
    display(head);
    insertathead(head, 4);
    display(head);


}