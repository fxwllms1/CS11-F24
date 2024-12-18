#include <iostream>
#include <cassert>
#include <cmath>
#include <cstdlib>
#include <time.h>
#include <climits>
using namespace std;


/**
 * Returns base raised to the power exponent.
 * 
 * @param b Base to raise to some `n`
 * @param n Power the `b` is raised to
 * @return `b` raised to the `n`th power.
 */
    int power(int b, int n) {
        // return pow(b, n);
        int base = b;
        int solution = 1;
        for(int i = 1; i < n; i++) {
            b *= base;
            solution = b; 
        }
        return solution;
    }

/**
 * The magnitude of a real number `n` without regard to its sign.
 * 
 * @param n Number to take the absolute value of
 * @return Absolute value of `n`
 */
double absolute(double n) {
    if(n < 0) {
        n *= -1;
    }
    return n;
}


/**
 * Returns the integral value that is nearest to n, with 
 * halfway cases rounded away from zero.
 * 
 * @param n Value to round.
 * @return n rounded.
 */
double rounded(double a) {
    int final = a + .5;
    return final;
}


int main() {
    srand(time(0));

    int b = rand() % 10;
    int n = rand() % 10;
    double a = rand() / INT_MAX + rand() % 10;

    // Assertion test for power()
    // assert(pow(b, n) == power(b, n));
    cout << pow(b, n) << " == " << power(b, n) << endl;

    // Assertion test for absolute()
    // assert(fabs(a) == absolute(a));
    cout << fabs(a) << " == " << absolute(a) << endl;

    // Assertion test for rounded()
    // assert(round(a) == rounded(a));
    cout << round(a) << " == " << rounded(a) << endl;

    return 0;
}