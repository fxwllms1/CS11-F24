#include <iostream>
using namespace std;

int main() {
    double i, j, k, min;

    cout << "Enter three numbers separated by spaces: ";
    cin >> i >> j >> k;

    if (i < j && i < k) {
        min = i;
    } else if (j < i && j < k) {
        min = j;
    } else {
        min = k;
    }

    cout << "The minimum of " << i << ", " << j << ", and " << k <<" is " << min << endl;
}