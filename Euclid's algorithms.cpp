#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;       // Base case
    return gcd(b, a % b);       // Recursive step
}

int main() {
    int width = 1680, height = 640;
    cout << "Largest square size: " << gcd(width, height) << " meters" << endl;
    return 0;
}
