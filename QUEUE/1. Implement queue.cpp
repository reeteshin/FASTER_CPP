#include<iostream>
// #include<stack>
using namespace std;
class Queue{
    public:
        int *arr;
        int size;
        int front;
        int rear;

        Queue(int capacity){
            arr = new int[capacity];
            size = capacity;
            front = -1;
            rear =  -1;
        }

    void Push(int val){
        if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = val;
        }else if(rear==size-1){
            cout<<"can not insert at queue"<<endl;
        }else{
            rear++;
            arr[rear] = val;
        }
    }

    int Pop(){//pop front
        if(front==-1&&rear==-1){
            cout<<"Can Not Pop from queue"<<endl;
        }
        int poptedvalue = arr[front];
        if((rear==front)){
            arr[front] = -1;
            rear=-1;
            front=-1;
        }
        else{
            arr[front] = -1;
            front++;
        }
        return poptedvalue;
    }
    bool isEmpty(){
        if(rear== -1&&front ==-1)return true;
        else return false;
    }
    int getSize(){
        if(front==-1&&rear==-1){
            cout<<"QUeue is EMpty"<<endl;
            return -1;
        }else{
            return rear-front+1;
        }
    }
    void Print(){
        for(int i = 0 ;i<size;i++){
            cout<<arr[i]<<endl;
        }
        cout<<"Front"<<front<<endl;
        cout<<"REAR"<<rear<<endl;
    }


};
int main()
{

    Queue Q(4);

    Q.Push(10);
    Q.Push(20);
    Q.Push(30);
    Q.Push(20);
    // Q.Push(30);
    Q.Pop();
     Q.Pop();
    cout<<"Queue Size"<< Q.getSize()<<endl;

     cout<<Q.isEmpty()<<endl;

    Q.Print();


}