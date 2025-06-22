// 🟢 Basic Level (Foundation Building)
// ✅ Create a singly linked list and print it.

// ✅ Insert at head / tail / at any given position.

// ✅ Delete from head / tail / any position.

// ✅ Find the length of a linked list (iterative + recursive).

// ✅ Search an element (iterative + recursive).

// ✅ Reverse a linked list (iterative).

// ✅ Find the middle of the linked list (Tortoise-Hare method).

// ✅ Detect if the linked list is circular.

// ✅ Merge two sorted linked lists (without extra space).

// ✅ Check if the linked list is a palindrome.

// 🟡 Intermediate Level (Logic + Patterns)
// 🔁 Reverse a linked list (recursive).

// 🔄 Reverse a linked list in groups of k (e.g. k=3).

// 🔁 Detect a loop using Floyd’s Cycle Detection Algorithm.

// ⭕ Find the start node of the loop in a circular linked list.

// 🧹 Remove duplicates from a sorted/unsorted list.

// ⛓️ Merge sort on a linked list.

// 🔁 Rotate linked list by k nodes.

// ➗ Split a linked list into two halves.

// 🔍 Find Nth node from the end (using two pointers).

// 🧠 Clone a linked list with next and random pointers.

// 🔴 Advanced Level (Real Problems / Optimization)
// ⚙️ Flatten a multilevel doubly linked list.

// 🔄 Convert binary number in linked list to integer.

// 🔁 Add two numbers represented by linked lists.

// 🧠 Copy a list with arbitrary/random pointers (hashing or O(1) space).

// 🚥 Intersection point of two linked lists.

// 🧩 Check if linked list has a cycle, and remove it.

// ⚖️ Sort a linked list in O(n log n) time and constant space.

// 📚 Convert linked list to balanced BST.

// 🔢 Reorder list (e.g., L0 → Ln → L1 → Ln-1 …)

// 🧮 Multiply two numbers represented as linked lists.

// 🧠 Bonus Challenges / Fun
// 🌪️ Zig-zag reorder of linked list.

// 📦 Design LRU Cache using linked list and hashmap.

// 🧱 Implement Stack and Queue using linked list.

// 💡 Flatten a linked list where each node has a child pointer to another list.

// 🎯 Josephus Problem using circular linked list.



#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        this->data = value;
        this->next = NULL;
    }

};

void insetAtHead(Node* &head,Node* &tail,int value){
     if(head==NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
     }else{
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
     }
}
void insetAtTail(Node* &head,Node* &tail,int value){
   
    if(head==NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;

    }else{
        Node* newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }


}
void PrintLinkedList(Node* &head){
     Node* temp = head;

     while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
     }
     cout<<"NULL"<<endl;
}
void PrintLinkedListUsingRecutrsion(Node* head){
    if(head==NULL) return;
    cout<<head->data<<"--->";
    
    PrintLinkedListUsingRecutrsion(head->next);
    // cout<<"NULL"<<endl;
}
int main(){

    // Node* newNode = new Node(30);

    Node* head = NULL;
    Node* tail = NULL;
    

    insetAtTail(head,tail,900);
    insetAtHead(head,tail,30);
    insetAtHead(head,tail,20);
    insetAtHead(head,tail,10);
    insetAtHead(head,tail,5);
    
    PrintLinkedListUsingRecutrsion(head);

    cout <<endl<< "HEAD -> " << (head ? head->data : -1) << endl;
    cout << "TAIL -> " << (tail ? tail->data : -1) << endl;


}