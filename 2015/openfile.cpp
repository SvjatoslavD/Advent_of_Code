#include "openfile.h"

string Open_File(string filename) {
	string loutput;
	string foutput;

	ifstream myfile (filename);
	if (myfile.is_open()) {
		while (getline(myfile,loutput)) {foutput.append(loutput);};
	}
	myfile.close();
	return foutput;
}
