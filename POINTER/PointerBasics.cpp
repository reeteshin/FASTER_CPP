
#include <iostream>
#include<vector>
using namespace std;

int nu(vector<int> arr,int size){
   if(size==0) {
       return 0;

   }
   
   

   

   cout<<"Hello";
   nu(arr,size-1);
   

}

int main(){
    vector<int> arr = {4,2,9};
    nu(arr,arr.size());

  
}