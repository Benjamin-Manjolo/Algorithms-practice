#include <iostream>
#include <vector>
using namespace std;

vector<int> multiplicationTable(int n) {
    vector<int> table;
    for (int i = 1; i <= 10; i++) {
        table.push_back(n * i);
    }
    return table;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> result = multiplicationTable(n);
    
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
