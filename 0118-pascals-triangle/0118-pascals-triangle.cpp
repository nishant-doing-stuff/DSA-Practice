class Solution {
public:
    // time : O(N^2)
    // extraSpace : O(1)
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle ; 
        triangle.push_back({1});
        for(int i = 2; i<=numRows;i++){
            vector<int> curRow ; 
            curRow.push_back(1);
            for(int j = 1;j<i - 1;j++){
                int curVal = triangle[i-2][j-1] + triangle[i-2][j];
                curRow.push_back(curVal);
            }
            curRow.push_back(1);
            triangle.push_back(curRow);
        }
        return triangle;
    }
};