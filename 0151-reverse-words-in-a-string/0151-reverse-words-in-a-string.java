class Solution {
    public void reverseSubString(char[] s, int si, int ei) {
        while (si < ei) {
            char temp = s[si];
            s[si] = s[ei];
            s[ei] = temp;
            si++;
            ei--;
        }
    }

    public int removeExtraSpaces(char[] s) {
        int n = s.length;
        int i = 0, j = 0;
        boolean alreadyFoundSpace = false;

        while (i < n) {
            if (s[i] == ' ') {
                if (!alreadyFoundSpace) {
                    s[j++] = ' ';
                    alreadyFoundSpace = true;
                }
            } else {
                s[j++] = s[i];
                alreadyFoundSpace = false;
            }
            i++;
        }
        
        if (j > 0 && s[j - 1] == ' ') {
            j--;
        }

        return j;
    }

    public String reverseWords(String str) {
        char[] s = str.trim().toCharArray();
        int newLen = removeExtraSpaces(s);
        reverseSubString(s, 0, newLen - 1);

        int i = 0, j = 0;

        while (i <= newLen) {
            if (i == newLen || s[i] == ' ') {
                reverseSubString(s, j, i - 1);
                j = i + 1;
            }
            i++;
        }

        return new String(s, 0, newLen);
    }
}
