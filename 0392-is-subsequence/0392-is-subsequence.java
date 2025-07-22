class Solution {
    // pattern : 2 pointers 
    // time : O(N)
    // space : O(1)
    public boolean isSubsequence(String t, String s) {
        int i = 0;
        int j = 0;
        while(i<s.length() && j<t.length()){
            if(s.charAt(i) == t.charAt(j)){
                j++;
            }
            i++;
        }
        return j == t.length();
    }
}