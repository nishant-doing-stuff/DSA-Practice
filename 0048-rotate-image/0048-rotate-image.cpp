class Solution {
public:
    void printMatrix(vector<vector<int>>& matrix){
         int n = matrix.size();
         for(int i = 0 ; i<n;i++){
            for(int j = 0 ; j<n;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    // time : O(2* N^2)
    // space : O(1)
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // step 1 ( revese each column )
        for(int col = 0 ; col<n;col++){
            for(int row = 0 ; row<n/2;row++){
                swap(matrix[row][col],matrix[n-1-row][col]);
            }
        }
        // printMatrix(matrix);

        // cout<<endl;
        // step 2 ( mirror from primary diagonal )
        for(int row = 0 ; row<n;row++){
            for(int col = 0 ; col<= row ; col++){
                swap(matrix[row][col],matrix[col][row]);
            }
        }
        // printMatrix(matrix);

        // cout<<endl;

    }
};