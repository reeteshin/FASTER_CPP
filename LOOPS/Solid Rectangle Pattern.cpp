#include<iostream>
using namespace std;
// Example 1:

// Input:

// n=2, m=5
// Output:

// * * * * * 
// * * * * * 
// Explanation:A solid rectangle of 2 rows and 5 columns.
int main(){
   int n =2;
   int m = 5;

   for(int i =0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<"* ";

    }
    cout<<endl;
   }
}