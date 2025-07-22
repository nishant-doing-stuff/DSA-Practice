class Solution {
    public String longestCommonPrefix(String[] strs) {
        int i = 0;
        while (true) {
            if (i >= strs[0].length()) break; // prevent index out of bounds
            char curChar = strs[0].charAt(i);
            for (int j = 0; j < strs.length; j++) {
                if (i >= strs[j].length() || strs[j].charAt(i) != curChar) {
                    return strs[0].substring(0, i); // fixed: return and method name
                }
            }
            i++;
        }
        return strs[0];
    }
}
