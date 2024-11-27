#include <iostream>
#include <string>
using namespace std;

void display(string &type) {
    int n;
    cin >> n;  // Read the number of words
    cin.ignore(); // Ignore the newline after the number

    for (int i = 0; i < n; i++) {
        getline(cin, type);  // Read each word

        // Check if the word needs abbreviation
        if (type.length() > 10) {
            // Print abbreviation
            cout << type.at(0) << type.length() - 2 << type.at(type.length() - 1) << endl;
        } else {
            // Print the word as-is
            cout << type << endl;
        }
    }
}

int main() {
    string type;
    display(type); // Call the display function to process and output the words
    return 0;
}
