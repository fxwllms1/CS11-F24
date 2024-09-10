#include<iostream>
using namespace std;

int main() {
	string phone; 

  cout << "Enter a phone number: ";
  cin >> phone;

  if (phone.length() == 10) {
    cout << "(" << phone.substr(0, 3) << ") ";
	  cout << phone.substr(3, 3) << "-" << phone.substr(6, 4) << endl;
  } else {
    cout << "A phone number should be 10 integers in length." << endl;
  }
}
