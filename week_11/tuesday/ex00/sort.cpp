#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Create a vector
    vector<double> input;

    // Take input till EOF and add to a vector 
    while(!cin.eof()) {
        double vinput;
        cin >> vinput;
        input.push_back(vinput);
    }
    vector<double> original = input; // saving original vector
    int size = input.size();

    // Sort the vector (later)
    sort(input.begin(), input.end());
        

    // Output each element
    for(int i = 0; i < size; i++) {
        cout << input[i] << endl;
    }
    cout << endl;
    return 0;
}