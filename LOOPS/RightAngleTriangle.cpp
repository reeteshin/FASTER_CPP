#include <iostream>
using namespace std;


void InvertedTriangel(int n){
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
   
}


void printHollowRightAngleTriangle(int n){
     
        //hello there this is now se
        cout<<"THIS IS PATTERN"<<endl;
        for(int i = 1;i<=n;i++){
            if(i==1||i==2||i==n){
                
                for(int j = 1;j<=i;j++){
    
                    cout<<"*";
                }
            }else{
                cout<<"*";
                //this loop is for skipping the space
                //how many space you want to skip
                for(int k = 0;k<i-2;k++){
                    cout<<" ";
                }

                cout<<"*";
            }
            cout<<endl;
        }
}


int main()
{
    int n = 5;
    printHollowRightAngleTriangle(n);
}