#include <iostream>
#include <cmath>

using namespace std;

double leibniz(int numTerms);

int main() {
	int a;
	cout.setf(ios::fixed); 	   // Display in fixed point notation. For example, display 1e-1 as 0.1
cout.setf(ios::showpoint); // Always display the decimal point.
cout.precision(3);         // Set the number of digits to display after the decimal point to 3
	while (1 > 0) {
		cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
		cin >> a;
		if (a == -1) {
			exit(0);
		} else {
			cout << "The approximate value of pi using ";
			int n = a + 1;
			cout << n;
			cout <<  " terms is: ";
			cout << leibniz(n) << endl;
		}
	}
	return 0;
}

double leibniz(int numTerms) {
	double approx = 0.0;
	for (int i = 0; i < numTerms; i++) {
		double j = pow(-1, i) * 1/(2*i + 1);
		approx += 4 * j;
	}
	return approx;
}
