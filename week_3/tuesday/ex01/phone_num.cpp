#include <iostream>
using namespace std;

int main() {
    string phoneNumber; // variable to store the phone number

    cout << "Enter a phone number: ";
    cin >> phoneNumber; // take input for the phone number

    if (phoneNumber.length() == 10) {
    cout << "(" << phoneNumber.substr(0, 3) << ")" << phoneNumber.substr(3, 3) 
    << "-" << phoneNumber.substr(6, 4) << endl; // output the number with the specified formatting
    }

    else
    cout << "Invalid input, please enter a 10 digit phone number \n";
}
