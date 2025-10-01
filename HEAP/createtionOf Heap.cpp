#include<iostream>
#include<queue>
using namespace std;


class Heap1{
public:
      int* arr;
      int size;
      int index;
      Heap1(int capacity){
        arr= new int[capacity];
        size = capacity;
        index = 0;
      }
    void PrintArray(){
        for(int i = 0 ;i<size;i++){
            cout<<arr[i]<<endl;
        }
        cout<<endl;
    }
    void insert(int value){
        if(index==size-1){
            cout<<"can not insert element"<<endl;
        }
        index++;//because we have to create 1 based index heap;
        arr[index] = value;

        int i = index;//if we get index, then we can get both child parent location crt?
        int childLocation = index;
        
        while(childLocation>1){
            int parentLocation  = childLocation/2;
            if(arr[childLocation]>arr[parentLocation]){

                swap(arr[childLocation],arr[parentLocation]);
                childLocation = parentLocation;
            }else{
                break;
            }
        }

        PrintArray();
    }
   
};

int main(){

    Heap1 obj(10);
    obj.insert(3);
     obj.insert(30);
      obj.insert(40);
       obj.insert(50);


}