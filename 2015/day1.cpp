#include "openfile.h"

//openfile uses namespace std, and has iostream and string
int main() {
	string filename{"day1-1.txt"};
	string a{Open_File(filename)};
	int counter{0};
	int basement{0};
	
	for (int i=0; i<a.size(); i++) {
		if (a[i]=='(') {counter++;}
		if (a[i]==')') {counter--;}
		if (counter<0 && basement==0) {basement = i+1;}
	}
	cout << "Result of day 1-1: " << counter << "\n"
		<< "Result of day 1-2: " << basement;
}

