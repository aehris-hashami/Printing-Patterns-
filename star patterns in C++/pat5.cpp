#include <iostream>
using namespace std;

void print_star(int l){
    if(l<1) return;

    for(int i=0; i<l; i++){
        for(int j=1; j<=(2*l-1); j++)
            if(l-i <= j && j <= l+i) cout << "* ";
            else                     cout << "  ";
        cout << endl;
    }
}

int main(){
	cout << "Number of lines: ";
	int l; cin >> l;

	print_star(l);

	return 0;
}
