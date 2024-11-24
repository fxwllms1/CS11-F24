#include <iostream>
#include <vector>
using namespace std;

double VowelPercentage(const string& word) {
  int vowelCount = 0;
  for (char ch : word) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
      ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
      vowelCount++;
    }
  }
  return static_cast<double>(vowelCount) / word.size() * 100;
}

int main () {
  vector<string> words = {"Hello", "World", "Text", "Fox"};
  for (const string& word : words) {
    cout << "Vowels in " << word << ": " << VowelPercentage(word) << "%" << endl;
  }
  return 0;
}