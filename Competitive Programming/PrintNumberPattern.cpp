#include <iostream>
using namespace std;

// You are given a number n. You need to generate and print a pattern based on the given value of n.

// For each row, starting from the first, print numbers in descending order from n down to 1.
// Each number in a row is repeated as many times as the current row index (starting from n).
// Instead of printing each row on a new line, separate rows with -1.
// Instead of a newline at the end of each row, print -1 to indicate row separation. After printing the entire pattern, end the output with -1.


int main() {
    int n;
    cin >> n; // Lowetsani n

    // Yambani kuchokera pa mzere wa n mpaka 1
    for (int i = n; i >= 1; i--) {
        // Kwa mzere uliwonse, sindikizani manambala kuchokera n mpaka 1
        for (int j = n; j >= 1; j--) {
            // Bwereza nambala j kangati malinga ndi i
            for (int k = 1; k <= i; k++) {
                cout << j << " ";
            }
        }
        // Sindikiza -1 pambuyo pa mzere uliwonse
        cout << "\n" << " ";
    }
    
    // Sindikiza -1 pamapeto a pattern
    cout << -1 << endl;

    return 0;
}