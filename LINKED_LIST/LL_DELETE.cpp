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
// ✅ Delete from head / tail / any position.
int main()
{
    Node *head = NULL;
    Node *tail = NULL;



}