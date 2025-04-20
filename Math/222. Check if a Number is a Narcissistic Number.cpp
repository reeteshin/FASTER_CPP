#include<iostream>
#include<cmath>
using namespace std;

// Input: num = 153
// Output:
// Explanation:153 is equal to 1^3 + 5^3 + 3^3, so it is Narcissistic.

int main(){
  int n = 153;
  int ncpy = n;
  int count = 0 ;
  int nosnum = 0;


  while(ncpy>0)
  {
    count++;
    ncpy = ncpy/10;
  }
  cout<<n<<count<<endl;
  while(n>0){
    int digit = n%10;
    // cout<<digit;
    nosnum = nosnum + pow(digit,count);
    // cout<<nosnum<<endl;
    n =  n/10;
  }

  cout<<nosnum;

//   return nosnum == n ? "Yes":"No";
}