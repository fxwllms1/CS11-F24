#include <iostream>
#include <iomanip>
#include <cmath>
// Libary for input/output manipulation
using namespace std;

int main() {
    int n;

    cout << "Times table generator" << endl;
    cout << "Creates a times table n x n" << endl << endl;

    cout << "Enter a number n: ";
    cin >> n;

    // Generate and output times table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << left << i * j << " ";
        }
        cout << endl;
    }
}
