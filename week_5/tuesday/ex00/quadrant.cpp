#include <iostream>
using namespace std;
// Program takes inpput of x and y and determins postions of points on a graph
int main() {
	double x, y;

    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    string position;
// quadrant I
    if (y > 0 && x > 0) {
        position = "within QI";
    }
    else if (y > 0 && x < 0) {
        position = "within QII";
    }
    else if (y < 0 && x < 0) {
        position = "within QIII";
    }
    else if (y > 0 && x > 0) {
        position = "within QV";
    }
    else if (y == 0 && x == 0) {
        position = "on the origin";
    }
    else if (y == 0) {
        position = "on the x axis";
    }
    else if (x == 0) {
        position = "on the y axis";
    }
    cout << "The point (" << x << ", " << y << ") lies " << position << endl;;
    
}