#include <iostream>
using namespace std;

void print_star(int n){
    if(n<0) exit;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
            printf("* ");
        cout << endl;
    }
}

int main(){
    cout << "Enter number of lines: ";
    int lines; cin>>lines;
    print_star(lines);
    return 0;
}
