class Solution {
public:
    // bfs 
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2)
                    q1.push({i, j});
            }
        }
        vector<pair<int,int>> directions = {
            {0, 1},
            {0, -1},
            {1, 0},
            {-1, 0}
        };
        int time = 0;
        while (!q1.empty()) {
            queue<pair<int,int>> q = q1;
            q1 = queue<pair<int,int>>(); // reset q1 properly
            time++;
            while (!q.empty()) {
                pair<int,int> curVertex = q.front();
                q.pop();
                for (auto& direction : directions) {
                    int newX = curVertex.first + direction.first;
                    int newY = curVertex.second + direction.second;
                    if (newX >= 0 && newY >= 0 && newX < n && newY < m && grid[newX][newY] == 1) {
                        grid[newX][newY] = 2;
                        q1.push({newX, newY});
                    }
                }
            }
        }

        // if still some oranges left then return -1; 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1)
                    return -1;
            }
        }
        return time == 0 ? 0 : time - 1; // fix off-by-one
    }
};
