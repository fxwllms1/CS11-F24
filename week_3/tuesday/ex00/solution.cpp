#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  double x_1, y_1, x_2, y_2, d;

  cout << "Point 1: (x_1, y_1):" << endl;
  
  cout << "x_1: ";
  cin >> x_1;

  cout << "y_1: ";
  cin >> y_1;

  cout << endl << "Point 1: (x_2, y_2):" << endl;

  cout << "x_2: ";
  cin >> x_2;

  cout << "y_2: ";
  cin >> y_2;

  d = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));

  cout << "The distance between points (" << x_1 << ", " << y_1 << ") and (" << x_2 << ", " << y_2 << ") is ";
  cout << fixed << setprecision(3);
  cout << d << endl;
}