#include <iostream>
#include <vector>
using namespace std;
// Input:

// n=7 arr=[1,2,3,4,2,5,6]
int main()
{


    //on red the code is giving error
    vector<int> arr = {1, 2, 3, 4,5, 6};

    
    int Max = 0;
    int i =0;
    int n = arr.size();
    while (i!=n)
    {
        if(arr[i]>Max){
            Max = arr[i];
        }
        i++;
    }
    // cout<<"THE MAX ---> "<<Max;
    vector<int> hash(Max+1, 0);
    

    for (int i = 0; i < arr.size(); i++)
    {
        // int num = arr[i];
        ++hash[arr[i]];
    }

    for (int i = 0; i < hash.size(); i++)
    {
        if (hash[i] > 1){

            cout << i << " -> " << hash[i] << endl;
            // break;
        }else{
            cout<<" -1 ";
        }
        
    }
}