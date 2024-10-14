#include <iostream>
#include <cmath> // Library for math
#include <iomanip> // Library for I/O formatting

using namespace std;

int main()
{
    double x_1, x_2, y_1, y_2;
    // What data type should your variables x_1, y_1, x_2, y_2 be?
    cout << "Point 1: (x_1, y_1): (seperate with a space ie. x y)" << endl;
    cin >> x_1; // Input for x_1
    cin >> y_1; // Input for y_1

    cout << endl
         << "Point 1: (x_2, y_2): (seperate with a space ie. x y)" << endl;
    cin >> x_2; // Input for x_2
    cin >> y_2; // Input for y_2

    double d = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2)); // Calculate d
    cout << "The distance between points " << fixed << setprecision(3) << d << endl;
    // cout << "The distance between points (" << x_1 << ", " << y_1 << ") and (" << x_2 << ", " << y_2 << ") is ";

    // How do you output to 3 decimal places?
    // Output the distance
}