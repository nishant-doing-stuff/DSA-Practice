class Solution {
public:
    // using bfs , each level signify a step 
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> allWords(wordList.begin(), wordList.end());
        vector<string> q;
        unordered_set<string> visited;
        int curLevel = 0;
        q.push_back(beginWord);
        
        while (!q.empty()) {
            curLevel++;
            queue<string> q2; // FIX: was "quque"
            for (auto &word : q) q2.push(word); 
            q.clear();

            while (!q2.empty()) {
                string curWord = q2.front();
                cout << q.size() << endl;
                q2.pop();
                
                if (curWord == endWord)
                    return curLevel;
                
                for (int i = 0; i < curWord.length(); i++) {
                    int curChar = curWord[i] - 'a';
                    for (int j = 0; j < 26; j++) {
                        if (j == curChar)
                            continue;
                        curWord[i] = j + 'a';
                        cout << curWord << ",";
                        if (allWords.find(curWord) != allWords.end() && visited.find(curWord) == visited.end()) {
                            q.push_back(curWord);
                            visited.insert(curWord);
                        }
                    }
                    curWord[i] = curChar + 'a';
                }
                cout << endl;
            }
        }
        return 0;
    }
};
