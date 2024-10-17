#include <iostream>
using namespace std;

//the following pattern is being designed:
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

int prompt(){
    cout << "Enter number of lines to be printed: ";
    int n; cin >> n; return n;
}

void method_1(int line, int i){
    for(int i=0; i<line; i++){
        for(int k = line-i; k>1; k--) cout << "  ";
        int j=1;
        for(; j<=i; j++) cout << j << ' ';
        for(; j>=1; j--) cout << j << ' ';
        cout << endl;
    }
}

// this may be the orthdox way of printing the pattern
// the basic skeleton of the algorithm remains, but
// additional things are added to create a pattern (1,2,3,...) 
// within a , familiar, pattern, which is:
//     *
//   * * *
// * * * * * 

void method_2(int line){
 
    for(int i=1; i<=line; i++){
 
        int k = 1;
 
        for(int j=1; j<=(2*line-1); j++){
 
            if(line-i < j && j < line+i){
                cout << k << ' ';
                (j<line)?(k++):(k--);
            }else cout << "  ";
        }
        
        cout << endl;
    }
}

int main(){
    int l = prompt();
    cout << "Calling method 1: \n"; method_1(l,1);
    cout << "Calling method 2: \n"; method_2(l);
    return 0;
}