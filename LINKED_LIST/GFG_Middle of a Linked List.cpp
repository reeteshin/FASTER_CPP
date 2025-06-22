#include <iostream>
#include<vector>
using namespace std;

class Node
{
public:
     int data;
     Node *next;
     // cntr
     Node(int value)
     {
          this->data = value;
          this->next = NULL;
     }
};

void insetAtTail(Node* &head,Node* &tail,int value){
    Node* newNode = new Node(value);

    if(head==NULL){
        head = newNode;
        tail = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
}
void PrintLL(Node* head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

void MiddleOfLinkedList(vector<int> &ans,Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        ans.push_back(temp->data);
        temp= temp->next;
    }
}
//slow and fast Pointer 
void MiddleUsingSlowPointer(Node* &head){

    if(head==NULL){
        return ;
    }
     
    Node * slow = head;
    Node* Fast = head;
    while(Fast!=NULL&&Fast->next!=NULL){
        slow = slow->next;
        Fast= Fast->next->next;
    }

    cout<<"The middle of LL >>   "<<slow->data<<endl;

}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int pos=0;
    // //1st creating the linked list
    for(int i = 1;i<10;i++){
        insetAtTail(head,tail,i);
    }
    PrintLL(head);
    vector<int> ans;
    MiddleUsingSlowPointer(head);
    // cout<<"middle of linked list----> "<<ans[ans.size()/2]<<endl;

    // cout<<"head -->" <<(head?to_string(head->data):"No data at head")<<endl;
    // cout<<"tail --->"<<(tail?to_string(tail->data):"No Data at tail")<<endl;








}