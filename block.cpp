#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	while (0 < 1) {
		string inputstring;
		cout << "Enter number of rows and columns:\n";
		cin >> inputstring;
		string current = "";
		for (int i = 0; i < sizeof(inputstring); i++) {
			if (inputstring[i] != " ") {
				current += inputstring[i];
			} else {
				int nrowstring = current;
				int spaceindex = i;
				i = sizeof(inputstring);
			}
		int nrow = atoi(current);
		string current = "";
		for (int i = spaceindex+1; i < sizeof(inputstring); i++) {
			current += inputstring[i];
		}
		int ncol = atoi(current);
		int i = 0;
		while(i <= ncol){
			i++;
			for(int j = 0; j <= ncol; j++){
				cout << "X.";
			}
			cout << endl;
		}
	}
	return 0;
}
