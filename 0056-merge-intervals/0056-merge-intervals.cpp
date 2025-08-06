class Solution {
public:
void printIntervals(vector<vector<int>>& intervals){
    for(auto &x : intervals){
            cout<<x[0]<<" "<<x[1]<<endl;
        }
}
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1)
            return intervals;
        vector<vector<int>> mergedIntervals ;
        sort(intervals.begin(),intervals.end(),[&](vector<int> & a,vector<int>&b){
            if(a[0]==b[0])
                return a[1]<b[1];
            return a[0]<b[0];
        });
        int si= intervals[0][0];
        int ei= intervals[0][1];
        for(int i = 1 ; i<intervals.size();i++){
            if(intervals[i][0]>ei){
                mergedIntervals.push_back({si,ei});
                si = intervals[i][0];
                ei = intervals[i][1];
            }
            else{
                ei = max(ei,intervals[i][1]);
            }
            if(i == intervals.size()-1){
                mergedIntervals.push_back({si,ei});
            }
            // cout<<si<<" "<<ei<<endl;
        }
        return mergedIntervals;
        
    }
};