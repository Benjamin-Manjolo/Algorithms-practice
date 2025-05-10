#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Lowetsani n

    // Yambani kuchokera pa mzere wa n mpaka 1
    for (int i = n; i >= 1; i--) {
        // Sindikiza mzere uliwonse
        cout << "Mzere " << i << ": ";
        for (int j = n; j >= 1; j--) {
            for (int k = 1; k <= i; k++) {
                cout << j << " ";
            }
        }
        cout << "-1 ";
    }
    
    // Sindikiza -1 pamapeto
    cout << -1 << endl;

    return 0;
}