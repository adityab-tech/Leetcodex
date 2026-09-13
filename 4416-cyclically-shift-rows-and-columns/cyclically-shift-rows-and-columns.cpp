class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>> gx(n,vector<int>(n));
        for (int i=0;i<n;i++) {
            int x=rowShift[i];
            for (int j=0;j<n;j++){
                gx[i][j] = grid[i][(j+x)%n];
            }
        }
        vector<vector<int>> gy(n,vector<int>(n));
        for (int i=0;i<n;i++) {
            int x=colShift[i];
            for (int j=0;j<n;j++){
                gy[j][i] = gx[(j+x)%n][i];
            }
        }
        return gy;
    }
};