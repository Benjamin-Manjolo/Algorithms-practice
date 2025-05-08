#include <iostream>
using namespace std;

int main() {
    int num[] = {5, 4, 2, 3, 1};
    int n = sizeof(num) / sizeof(num[0]);

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (num[j] < num[minIndex]) {
                minIndex = j;
            }
        }
        // Swap
        int temp = num[i];
        num[i] = num[minIndex];
        num[minIndex] = temp;
    }

    // Print sorted array
    cout << "The selection sorted list: ";
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}
