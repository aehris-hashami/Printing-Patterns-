#include <iostream>
using namespace std;

void print_star(int l){
	if(l<1) return;

	cout << endl;
	for(int i = 1; i<=l; i++){
		for(int j = 1; j<=l; j++) 
			if(j <= i-1) cout << "  ";
			else 		 cout << "* ";
		cout << endl;
	}
}

int main(){
	cout << "Number of lines: ";
	int l; cin >> l;

	print_star(l);

	return 0;
}
