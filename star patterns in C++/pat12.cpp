#include <iostream>
using namespace std;


// the design being produced is :
// * * * * *
//   * * * 
//     *

void method_1(int row){

    for(int i=row; i>=0; i--){

        for(int j=1; j<=(2*row - 1); j++){

            if(row-i < j && j < row+i)
                cout << "* ";
            else cout << "  ";
        }

        cout << endl;
    }
}

int main(){
    method_1(6);
    return 0;
}