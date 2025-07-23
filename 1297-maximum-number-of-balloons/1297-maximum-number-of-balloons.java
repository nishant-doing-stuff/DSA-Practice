import java.util.HashMap;
import java.util.Map;

class Solution {
    public int maxNumberOfBalloons(String text) {
        HashMap<Character, Integer> requiredFreq = new HashMap<>();
        HashMap<Character, Integer> actualFreq = new HashMap<>();

        // Count required frequency of characters in "balloon"
        for (char x : "balloon".toCharArray()) {
            requiredFreq.put(x, requiredFreq.getOrDefault(x, 0) + 1);
        }

        // Count actual frequency in input text
        for (char x : text.toCharArray()) {
            actualFreq.put(x, actualFreq.getOrDefault(x, 0) + 1);
        }

        int maxQuantity = Integer.MAX_VALUE;

        // Compute how many full "balloon" words we can make
        for (Map.Entry<Character, Integer> entry : requiredFreq.entrySet()) {
            char ch = entry.getKey();
            int required = entry.getValue();
            int available = actualFreq.getOrDefault(ch, 0);
            maxQuantity = Math.min(maxQuantity, available / required);
        }

        return maxQuantity == Integer.MAX_VALUE ? 0 : maxQuantity;
    }
}
