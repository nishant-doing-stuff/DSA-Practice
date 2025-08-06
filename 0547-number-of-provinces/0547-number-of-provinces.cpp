class Solution {
public:
    int n;
    int m;
    int findCircleNum(vector<vector<int>>& graph) {
        int count = 0;
        n = graph.size();
        m = graph[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (graph[i][j] == 1) {
                    count++;
                    dfs(i, graph);
                }
            }
        }
        return count;
    }
    void dfs(int x, vector<vector<int>>& graph) {
        if (x < 0 || x >= n)
            return;
        // check all the nodes x is connected to and then make the dfs call ,
        // mark this node as visited
        for (int i = 0; i < m; i++) {
            if (graph[x][i] == 1) {
                graph[x][i] = -1;
                dfs(i, graph);
            }
        }
    }
};