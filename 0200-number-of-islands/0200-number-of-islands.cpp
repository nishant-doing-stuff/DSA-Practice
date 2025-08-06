class Solution {
public:
    int n ; 
    int m ; 
    // time O(N*M)
    // space O(1)
    vector<pair<int,int>> directions = {
        {0,1},
        {1,0},
        {0,-1},
        {-1,0}
    };
    int numIslands(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int count = 0;
        for(int i = 0 ; i<n;i++){
            for(int j = 0 ; j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    visit(grid,i,j);
                }
            }
        }
        return count;
    }
    void visit(vector<vector<char>> & grid, int i , int j){
        if(i>=n || j>=m || i<0 || j<0 || grid[i][j]!='1')
            return ; 
        grid[i][j] = '0';
        for(auto & dir : directions){
            visit(grid,i+dir.first,j+dir.second);
        }
        return;
    }
};