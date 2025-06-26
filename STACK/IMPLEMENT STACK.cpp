#include <iostream>
using namespace std;

class Stack
{

public:
    int *arr;
    int size;
    int top1;
    int top2;
    Stack(int capacity){
        arr = new int[capacity];
        size = capacity;
        top1 = -1;
        top2 = size;

    }

    void Push1(int val){
        if(top1==size){
            cout<<"stack is empty";
        }else{
            top1++;
            arr[top1] = val;
            // top1++;
        }

    }
    void Push2(int val){
        if(top2-top1==1){
            cout<<"stack is full"<<endl;
        }else{
            arr[top2] = val;
            top2--;
        }
    }

    void Print(){
        cout<<endl;
        for(int i = 0 ;i<size;i++){
            cout<<arr[i]<<"-->";
        }
        cout<<endl;
    }
};

int main()
{
    Stack P(7);

    P.Push1(10);
    P.Push1(10);
    P.Push1(10);

    P.Push2(1);
     P.Push2(2);
      P.Push2(3);
       P.Push2(4);
        P.Push2(5);
        P.Push2(6);

    P.Print();

}