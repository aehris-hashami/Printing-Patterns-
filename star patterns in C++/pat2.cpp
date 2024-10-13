#include <iostream>
using namespace std;

void print_star(int n){
	if(n<0) exit;

	for(int i=n; i>0; i--)
	{
		for(int j=1; j<=n; j++)
			if(j>=i) printf("* ");
			else 	 printf("  ");
		cout << endl;
	}
}

int main(){
	cout << "Enter number of lines: ";
	int lines; cin >> lines;

	print_star(lines);

	return 0;
}

