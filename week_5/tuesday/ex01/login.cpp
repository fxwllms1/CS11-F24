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
    else {
        cout << "email or password is incorrect" << endl;
    }
    // if (successful login)
    // welcome user
    // if (unsuccessful login)
    // email or password is incorrect

}