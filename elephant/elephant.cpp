#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;  // Read the coordinate of the friend's house

    // Calculate full steps of 5 and check for remaining steps
    int fullSteps = x / 5;
    int remaining = x % 5;

    // If there is a remainder, we need one more step to cover up to 4 units
    if (remaining > 0) {
        fullSteps += 1;
    }

    // Output the total number of steps
    cout << fullSteps << endl;

    return 0;
}

