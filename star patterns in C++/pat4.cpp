#include <iostream>
using namespace std;

void print_star(int l){
    if(l<1) return;

    for(int i = l; i>0; i--){
        for(int j = i; j>0; j--) cout << "* ";
        cout << endl;
    }
}

int main(){
	cout << "Number of lines: ";
	int l; cin >> l;

	print_star(l);

	return 0;
}