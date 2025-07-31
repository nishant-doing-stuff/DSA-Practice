class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int si = 0;
        int ei = numbers.size()-1;
        while(si<ei){
            int curNum = numbers[si] + numbers[ei];
            if(curNum>target)
                ei--;
            else if(curNum<target)
                si++;
            else
                return {si+1,ei+1};
        }
        return {0,0};
    }
};