#include<iostream>
using namespace std;

// n = 5
// [
//     [1],
//     [1, 1],
//     [1, 2, 1],
//     [1, 3, 3, 1],
//     [1, 4, 6, 4, 1]
// ]
int main()
{
    int n = 5;
    cout<<"["<<endl;
    for(int i = 1 ;i<=n ; i++){
        cout<<"[";
        int c= 1;
        for(int j = 1;j<=i;j++){

            cout<<c;
            if(i!=j)cout<<",";
            c=c*(i-j)/j;
            //c=c*(i-j)/j;// 
            //still we dont know about formula
        }
        cout<<"],";
        cout<<endl;
    }
    cout<<"]"<<endl;
}