class Solution {
public:
    // brute hashing
    // sort each key and push the unsorted key into the list mapped to the
    // sorted key
    // N = length of the list 
    // L = avg lenght of the string 
    // time (N*L(logL))
    // space 2*N*L
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;
        for (int i = 0; i < strs.size(); i++) {
            string curStr = strs[i];
            string key = curStr;
            sort(key.begin(), key.end());
            hash[key].push_back(curStr);
        }
        vector<vector<string>> ans;
        for (auto& [key, value] : hash) {
            ans.push_back(value);
        }
        return ans;
    }
};
