#include<iostream>
using namespace std;

int main(){


    int num = 7;
    bool isPrime = false;
    int start = 2;
    int end = num - 1;

    for(int i = start;i<=end;i++){

        //we check if number num is divisible by any of looped number
        // if we found any fector then number is not prime

        if(num%i==0){
            //cout<< "Number is not prime"<<endl;
            isPrime = true;
            break;
        }


    }
    if(!isPrime){
        cout<<"Number is prime"<<endl;

    }else{
        cout<<"Number is not prime"<<endl;
    }

}