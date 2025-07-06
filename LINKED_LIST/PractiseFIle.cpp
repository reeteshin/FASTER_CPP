// Here’s a practice list to help you implement everything:

// #	Task
// 1	Implement insertAtHead, insertAtTail
// 2	Implement deleteHead, deleteAtPosition
// 3	Implement search, length
// 4	Implement reverseIterative, reverseRecursive
// 5	Find middle, find Nth from end
// 6	Detect and remove cycle
// 7	Merge two sorted linked lists
// 8	Check if a linked list is a palindrome
// 9	Clone a linked list with random pointers



#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        this->data = val;
        this->next = nullptr;
    }
};
void AddElementInLL(Node* &head,Node* &tail,int val = 10){
    // head insertion of LL
    Node* newNode = new Node(val);
    if(head == nullptr){
        head = newNode;
        tail = newNode;
    }else{
        newNode->next = head;
        head = newNode;

    }

}
void AddElementInTail(Node* &head,Node* &tail,int val=10){
    //tail insertion of LL
    Node* newNode = new Node(val);
    if(head==nullptr){
        head = newNode;
        tail = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }


}
void PrintLL(Node* head){

    //lets do this by recursion
    if(head==nullptr){
        cout<<"NULL"<<endl;
        return;
    }
    
    cout<<head->data<<"-->";
    PrintLL(head->next);
    // cout<<head->data<<"-->";

    // if(head== nullptr){
    //     cout<<"LIST IS EMPTY";
    //     return;
    // }
    // while(head!=nullptr){
    //     cout<<head->data<<"--> ";
    //     head = head->next;
    // }
    // cout<<"NULL"<<endl;
}
void deleteHead(Node* &head){
    if(head==nullptr)return;
    Node* temp = head;
    head = head->next;
    temp->next = nullptr;
    delete temp;
}
void deleteByValue(Node* &head, int val=2) {
    Node * temp = head;
    if(temp == nullptr)return;
if (head->data == val) {
        deleteHead(head);
        return;
    }
    while(temp!=nullptr && temp->next->data!=val){
        temp = temp->next;
    }

    Node* tempNode = temp->next;
    temp->next = temp->next->next;
    delete tempNode;
    // cout<<"temp->data"<<temp->data<<endl;

}

void reverseALL(Node* &head,Node* &tail){

    Node* temp = head;
    if(temp == nullptr)return;


    Node* prv = nullptr;
    Node* curr = head;
    Node* fw = nullptr;
    while(curr!=nullptr){
        fw = curr->next;
        curr->next = prv;
        prv = curr;
        curr = fw;

    }
    head = prv;



}
void reverseRecursive(Node* &head,Node* curr,Node* prv){
    if(curr==nullptr)return;
}
int main(){
    
    Node* head = nullptr;
    Node* tail = nullptr;
    for(int i = 1 ;i<=4;i++){

        AddElementInLL(head,tail,i);
        //head insertion of LL
    }
    for(int i = 0 ;i<3;i++){
        AddElementInTail(head,tail,i);
    }

    // AddElementInTail(head,tail);
    //delete note at givem pos
    //reverse a Link List
    // PrintLL(head);
    
    // deleteByValue(head,4);
    // deleteByValue(head,1);
    // deleteByValue(head,1);
    // deleteHead(head);
    // reverseALL(head,tail);
    
    PrintLL(head);

}