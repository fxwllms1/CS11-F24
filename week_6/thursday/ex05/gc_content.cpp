#include <iostream>
using namespace std;

int main () {
	string sequence;
	int total =  0;
	int gc_total = 0;
	int gc_percent = 0;
    // Your code here
	while (cin >> sequence)
		for (int i = 0; i < sequence.length(); i++) {
			char c;
			c = sequence[i];
			if (c == 'A' || c == 'C' || c == 'G' || c == 'T') {
				total++;
			}
			if (c == 'C' || c == 'G') {
				gc_total++;
			}
		}

	gc_percent = (1.0 * gc_total / sequence.length()) * 100; 
	cout << "percent of 'G' and 'C' is: " << gc_percent << "%" << endl;

	while (cin.eof()) {
		break;
	}
	
	return 0;
}