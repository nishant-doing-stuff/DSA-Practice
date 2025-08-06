class Solution {
public:
    // method1 try out all ways
    // space : ( n*m )
    vector<pair<int,int>> movements = {
        {0,1},// right
        {1,0}//down
    };
    int m;
    int n;
    int uniquePaths(int rows, int cols) {
        m = rows;
        n = cols;
        vector<vector<int>> visited(m+1, vector<int>(n+1, -1));
        return tryOutAllWays(0, 0, visited);
    }
    void prointVisited(vector<vector<int>>& visited){
        cout<<"============="<<endl;
        cout<<m<<n;
        for(int i = 0 ;i<m;i++){
            for(int j = 0 ; j<n;j++){
                cout<<visited[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"============"<<endl;
    }
    int tryOutAllWays(int x, int y, vector<vector<int>>& visited) {    
        // prointVisited(visited);
        if(x==m-1 && y==n-1)
            return 1;
        // cout<<"first "<<x<<" "<<y<<endl;
        if(x<0 || y<0 || x>=m || y>=n)
            return 0;
        // cout<<"second "<<x<<" "<<y<<endl;
        if(visited[x][y]!=-1)
            return visited[x][y];
        int count = 0;
        for(auto & movement : movements ){
            count+= tryOutAllWays(x+movement.first,y+movement.second,visited);
        }
        return visited[x][y] = count;
    }
};