class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>> a(n, vector<int>(n));

for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
a[i][(j-rowShift[i]+n)%n] = grid[i][j];

grid = a;
a.assign(n, vector<int>(n));


for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
a[(i-colShift[j]+n)%n][j]=grid[i][j];

return a;









    }
};