#include <iostream>
#include <vector>
using namespace std;

int minPathSum(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> dp(m, vector<int>(n, 0));
    
    dp[0][0] = grid[0][0]; // Yamba ndi mtengo woyamba
    
    // Konzani mzere woyamba
    for (int j = 1; j < n; j++) {
        dp[0][j] = dp[0][j-1] + grid[0][j];
    }
    
    // Konzani ndime yoyamba
    for (int i = 1; i < m; i++) {
        dp[i][0] = dp[i-1][0] + grid[i][0];
    }
    
    // Konzani dp table
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
        }
    }
    
    return dp[m-1][n-1];
}

int main() {
    vector<vector<int>> grid = {
        {1, 3, 1},
        {5, 9, 2},
        {8, 4, 7}
    };
    cout << "Njira yochepa kwambiri: " << minPathSum(grid) << endl;
    return 0;
}