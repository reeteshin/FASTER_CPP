#include<iostream>
using namespace std;


int commonFnForReverce(int x){
        int store = 0;

        while(x!=0){
            int digit = x%10;
            store = store*10+digit;

            x = x/ 10;
        }


        return store;
}

int main(){

    int n = 121;
    int reversedNum = commonFnForReverce(n);


    //checking the the palindrome number

    if(n == reversedNum){
        cout<<"THIS IS PALINDROME NUMBER";
    }else{
        cout<<"THIS IS NOT A PLINDROME NUMBER";
    }



}