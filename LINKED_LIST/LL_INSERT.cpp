#include <iostream>
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
// ✅ Insert at head / tail / at any given position.
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
void InsertNodeInLL(Node* &head,Node* &tail,int pos,int valueToInsert){
    Node* temp = head;
    Node* newNode = new Node(valueToInsert);
    int count =0 ;
    if(pos==0){
        newNode->next = head;
        head = newNode;
        
    }else{

        
        while(count!=pos){
            temp = temp->next;
            count++;
            
        }
        // cout<<temp->data;
        Node* newNode = new Node(valueToInsert);
        Node* tempvalue = temp->next;
        temp->next = newNode;
        newNode->next = tempvalue;
    }
}

void DeleteNodeFromLL(Node* &head,Node* &tail,int target){

    Node* temp = head;
    Node* prv = head;
    while(temp!=NULL&&temp->data!=target){
        // if(temp->data==target){
            cout<<target<<endl;
            prv = temp;
        // }
        temp = temp->next;
    }

    prv->next=temp->next;
    delete temp;

    cout<<"prevoius pointer location"<<prv->data<<endl;
    

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
    //current location of the head and tail
    InsertNodeInLL(head,tail,pos,100);
    PrintLL(head);
    DeleteNodeFromLL(head,tail,2);
    PrintLL(head);
    cout<<"head -->" <<(head?to_string(head->data):"No data at head")<<endl;
    cout<<"tail --->"<<(tail?to_string(tail->data):"No Data at tail")<<endl;








}