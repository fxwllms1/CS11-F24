// String to double convert 
// This is a work in progress
#include <iostream>
using namespace std;

int main() {
    string input = "9542.012";
    string dec;
    bool is_number = true;
    int dec_i = -1;
    
    // Iterate through each character of the string
    for (int i = 0; i < input.length(); i++) {
        // Check if it is not a valid number
        if (input[i] <= '0' || input[i] >= '9' && input[i] != '.') {
            is_number = false;
            // Break out of loop because there is no sense in continuing
            break;
        }
        if (input[i] == '.') {
            // Find the location of the decimal
            dec_i = i;
        }
    }
    if (is_number) {

        // There is a decimal place
        if (dec_i != -1) {
            // FIXME: Dont know if these indexes make sense
            // Extract the decimal portion of the string
            dec = input.substr(dec_i);
            // Extract the integer portion of the string
            input = input.substr(0, dec_i);
        }

        for (int i = 0; i < input.length(); i = i + 1) {
            input[input.length() - i - 1];
        }
    } else {
        cout << "not a valid number\n";
    }

}