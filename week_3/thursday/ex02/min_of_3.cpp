#include <iostream>
using namespace std;

int main() {
    double i, j, k, min;

    cout << "Enter three numbers separated by spaces: ";
    cin >> i >> j >> k;

    //-------------------- YOUR CODE BELOW -------------------------
    // Set the minimum value to `min` variable
    bool least_i = false;
    bool least_k = false;
    bool least_j = false;
    if (i < j && i < k) {
        least_i = true;
        min = i;
    }
    else if (k < i && k < j) {
        least_k = true;
        min = k;
    }
    else if (j < i && j < k) {
        least_j = true;
        min = j;
    }
    else if (i == j || i == k && least_i == true) {
        min = i;
    }
    else if (k == i || k == j && least_k == true) {
        min = k;
    }
    else if (j == i || j == k && least_j == true) {
        min = j;
    }

	//-------------------- YOUR CODE ABOVE -------------------------

    cout << "The minimum of " << i << ", " << j << ", and " << k <<" is " << min << endl;
}