#include <iostream>

using namespace std;

// Recursive countdown function
void countdown(int i) {
    cout << i << endl; // Print the current number
    if (i <= 0) {
        return; // Base case: stop when i reaches 0 or less
    } else {
        countdown(i - 1); // Recursive case: call countdown with i - 1
    }
}

int main() {
    countdown(5); // Start countdown from 5
    return 0;
}
