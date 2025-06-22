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
void reverseLL(Node* &head){
    Node* prv = NULL;
    Node* cur =head;
    Node* savecurrent = NULL;

    // prv->next = NULL;
    while(cur!=NULL){
        savecurrent = cur->next;

        cur->next = prv;
        prv = cur;
        cur = savecurrent;
    }
    head = prv;
}
int main(){

    //we have to reverse the link
    Node * head = NULL;
    Node* tail = NULL;
    for(int i = 0 ;i<6;i++){

        IntertAtTail(head,tail,i);
    }
    PrintLinkedList(head);
    reverseLL(head);

    PrintLinkedList(head);

}