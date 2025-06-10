#include<iostream>
using namespace std;

// *       *
//  *     *
//   *   *
//    * *
//     *
//    * *
//   *   *
//  *     *
// *       *

//pending
int main(){
    int n = 4;
      n++;
		for (int i = 0; i < n; i++) {
			// Leading spaces for alignment
			for (int j = 0; j < i; j++) {
				cout << " ";
			}
			// Left star
			cout << "*";
			// Middle spaces
			for (int j = 0; j < (2 * (n - i-1) - 1); j++) {
				cout << " ";
			}
			// Right star if not at the tip
			if (i != n - 1) {
				cout << "*";
			}
			cout << endl;
		}

		// Bottom half of the zig-zag pattern (non-inverted V shape)
		for (int i = n - 2; i >= 0; i--) {
			// Leading spaces for alignment
			for (int j = 0; j < i; j++) {
				cout << " ";
			}
			// Left star
			cout << "*";
			// Middle spaces
			for (int j = 0; j < (2 * (n - i-1) - 1); j++) {
				cout << " ";
			}
			// Right star if not at the tip
			if (i != n - 1) {
				cout << "*";
			}
			cout << endl;
		}

    // for(int i = 0 ;i<2*n;i++){
    //     for(int j = 0 ;j<2*n;j++){
    //         if(i==j|| j == 2*n-i-1){
    //             cout<<"*";
    //         }else{
    //             cout<<"_";
    //         }
    //     }
    //     cout<<endl;
    // }
     
}