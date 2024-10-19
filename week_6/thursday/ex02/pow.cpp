#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int b, n, result;

    cout << "Enter the base: ";
    cin >> b;

    cout << "Enter the power: ";
    cin >> n;

    result = pow(b, n);

    // Your code here

    cout << b << "^" << n << " = " << result << endl;
}