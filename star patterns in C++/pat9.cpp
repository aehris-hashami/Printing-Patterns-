#include <iostream>
using namespace std;

// pattern to be produced is: 
// A B C D C B A
// A B C   C B A
// A B       B A
// A           A

int prompt(){
    cout << "Enter number of lines to be printed: ";
    int n; cin >> n; return n;
}

// this may be the orthdox way of printing the pattern
// the basic skeleton of the algorithm remains, but
// additional things are added to create a pattern (A,B,C,..)
// within a , familiar, pattern, which is:
// * * * * *
// * *   * *
// *       *

void method_1(int line){
    
    for(int i=1; i<=line; i++){
    
        char k = 'A';
    
        for(int j=1; j<=(2*line - 1); j++){
    
            if(j<=line-i+1 || j>=line+i-1)
            {cout << k << ' '; (j<=line)?(k++):(k--);} 
            else cout << "  ";
        }
    
        cout << endl;
    }
}

int main(){
    method_1(prompt());
    return 0;
}