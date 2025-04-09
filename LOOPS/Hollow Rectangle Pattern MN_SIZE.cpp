#include<iostream>
using namespace std;
// Input:

// n=4, m=4
// Output:

// * * * * 
// *     * 
// *     * 
// * * * * 
// Explanation:A hollow square-like rectangle
// of 4 rows and 4 columns.
int main(){

    int m = 7;
    int n = 3;

    for(int i = 0;i<n;i++){
        for (int j = 0; j < m; j++)
        {
            if(i==0||j==0||j==m-1||i==n-1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
        
    }


}