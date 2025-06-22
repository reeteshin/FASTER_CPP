#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    //cntr
    Node(int value){
        this->data= value;
        this->next= NULL;
    }
};
void insertAtTail(Node* &head,Node* &tail,int value){
    Node * newNode = new Node(value);

    if(head == NULL && tail==NULL){
       head = newNode;
       tail = newNode;

    }else{
        tail->next = newNode;
        tail = newNode;
    }

}
void PrintLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int SearchElement(Node* head,int t){
     Node* temp = head;
     int pos = 0;
     while(temp!=NULL){
        pos++;
        if(temp->data==t)
        {
            return pos;
        }else{
            temp = temp->next;
        }
     }
     return -1;
}
int main(){

    Node* head = NULL;
    Node* tail = NULL;
    // int value = 30;

    for(int i = 112;i<117;i++){
        insertAtTail(head,tail,i);
    }
    int target = 115;
    int pos =  SearchElement(head,target);
    cout<<"FOUND AT POS"<<pos<<endl;
    PrintLL(head);
    cout<<"HEAD ---> "<<head->data<<endl;
    cout<<"TAIL ---> "<<tail->data<<endl;

}