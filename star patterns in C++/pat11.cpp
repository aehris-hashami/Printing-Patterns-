#include <iostream>
using namespace std;

// pattern to be produced:
// * 
// * *
// * * *
// * *
// *

void method_1(int wide){
    int row = 2*wide - 1, k = 0;
    
    for(int i=1; i<=row; i++){
    
        // width/max number of coloumns is the middle row
        (i<=wide)?(k++):(k--); 
    
        for(int j=1; j<=wide; j++){
    
            if(j <= k) cout << "* ";
            else       cout << "  ";
        }
    
        cout << endl;
    }
}

int main(){
    method_1(4);
    return 0;
}