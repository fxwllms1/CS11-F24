// program asks user for email and password and then determins if its correct, looping re inout for incorrect
#include <iostream>
using namespace std;
// program accepts inout of email and password from user and determins if it is correct
int main() {
    // Constants (correct values)
    const string EMAIL = "stlheure@cabrillo.edu";
    const string PASSWORD = "password123";

    string email, password;

    cout << "Email: ";
    cin >> email;

    cout << "Password: ";
    cin >> password;

    if (email == EMAIL && password == PASSWORD) {
        cout << "Welcome to the site" << endl;
    }
    while (email != EMAIL || password != PASSWORD) {
        cout << "Incorrect email or password, please re enter" << endl;
        cout << "Email: ";
        cin >> email;

        cout << "Password: ";
        cin >> password;
    }
    // if (successful login)
    // welcome user
    // if (unsuccessful login)
    // email or password is incorrect

}