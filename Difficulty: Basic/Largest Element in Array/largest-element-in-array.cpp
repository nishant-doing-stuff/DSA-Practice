class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int maxx = -1;
        
        for(auto &x : arr)
            maxx = max(maxx,x);
        
        return maxx;
        
    }
};
