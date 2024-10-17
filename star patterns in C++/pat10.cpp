#include <iostream>
using namespace std;


// //the following pattern is being designed:
    // for even number of rows:
//       *
//     * * *
//   * * * * *
// * * * * * * * 
//   * * * * *
//     * * *
//       * 

    // for even numbers of rows:
//   * 
// * * *
// * * * 
//   *

int prompt(){
    cout << "Enter how wide the pattren is to be printed: ";
    int w; cin >> w; return w;
}

void method_1(int wide){
    int mid = wide/2 + 1, k=0;

    for(int i=1; i<=wide; i++){
        if(wide%2 == 0){    // when there are even number of rows 
            if(i<mid) k++; 
            if(i>mid) k--;
        }else (i <= mid)?(k++):(k--); // when there odd number of rows
    
        for(int j=1; j<=wide; j++){
    
            if(mid-k < j && j < mid+k)
                cout << "* ";
            else cout << "  ";
        }
    
        cout << endl;
    }
}

int main(){
    method_1(4);
}