#include<iostream>
#include<vector>
using namespace std;


void Sort(vector<int> nums,int size){
    int start = 0;
    int end = size-1;

    while (start<end)
    {
        if(nums[start]==1 && nums[end]==0){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }else if(nums[start]==0 ){
            start++;
        }else if( nums[end]==1){
            end--;
        }
    }
    for(int n : nums){
        cout<<n<<endl;
    }
    


}




 int main(){

    // int n = 0;
    // int arr[] ={10 ,20,30};

    // int target = 20;
    
    vector<int> arr={1,1,1,0,0,0,0,0};

    cout<<arr.size()<<endl;

    Sort(arr,arr.size());

    // creating all pair
    // for(int i = 0;i<3;i++){
    //     for(int j = 0;j<3;j++){
    //         if(target == arr[i]+arr[j]){

    //             cout<<"["<<arr[i]<<","<<arr[j]<<"]";
    //         }
    //     }
    //     cout<<endl;
    // }

 }