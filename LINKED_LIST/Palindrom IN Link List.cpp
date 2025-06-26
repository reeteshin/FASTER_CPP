// 234. Palindrome Linked List   Easy
// Given the head of a singly linked list, 
// return true if it is a palindrome or false otherwise
#include<iostream>
using namespace std;
class Node{
    
    public:
        int data;
        Node* next;
        Node(int value){
            this->next = NULL;
            this->data = value;
        }
     
};
void IntertAtTail(Node* &head,Node* &tail,int value){
    Node * newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = newNode;

    }else{
        //link new node to tail
        tail->next = newNode;
        //sift tail to last node
        tail = newNode;

    }
    
}
void PrintLinkedList(Node* head){
    if(head==NULL)return;
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"NULL";
}
Node* MidOfLinkL(Node* head){
    Node* temp = head;
    Node* slow = temp;
    Node* fast = temp;
    while(fast->next!=NULL&& fast!=NULL){
         slow = slow->next;
         fast = fast->next->next;
    }
    return slow;
}
void ReverseLL(){
    
}
int main(){

    Node* head = NULL;
    Node* tail = NULL;

    for(int i = 0 ;i<7;i++){
        IntertAtTail(head,tail,i);
    }
    PrintLinkedList(head);



}