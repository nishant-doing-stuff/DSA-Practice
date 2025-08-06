class Solution {
public:
    bool isPalindrome(string s) {
        return recursion(0, s.length() - 1, s);
    }

    bool recursion(int si, int ei, string &s) {
        if (ei - si < 1)
            return true;
        if (!isalnum(s[si]))
            return recursion(si + 1, ei, s);
        if (!isalnum(s[ei]))
            return recursion(si, ei - 1, s);
        if (tolower(s[si]) != tolower(s[ei]))
            return false;
        return recursion(si + 1, ei - 1, s);
    }
};
