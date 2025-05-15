#include<iostream>
#include<vector>

using namespace std;
int FindSquareRoot(int target,int x){
    int s = 0;
    int e = x;

    int ans=0;

    while(s<=e){
        long long int mid = s+(e-s)/2;
        long long int product = mid*mid;

        if(product == target){
            return mid;
        }
        if(product>target){
            e = mid-1;
        }else{
            ans = mid;
            s = mid+1;
        }
        
    }
    return ans;
}
int main(){
    int x = 8;
    cout<< FindSquareRoot(x,x);
   

}