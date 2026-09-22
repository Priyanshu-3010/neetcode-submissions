class Solution {
   public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> wordset(wordList.begin(), wordList.end());
        unordered_set<string> visited;
        queue<string> q;
        q.push(beginWord);
        visited.insert(beginWord);

        int level = 1;
        while (!q.empty()) {
            int n = q.size();
            while (n--) {
                string curr = q.front();
                q.pop();

                if (curr == endWord) {
                    return level;
                }

                for (int i = 0; i < curr.length(); i++) {
                    char orignal = curr[i];

                    for (char ch = 'a'; ch <= 'z'; ch++) {
                        curr[i] = ch;

                        if (visited.find(curr) == visited.end() &&
                            wordset.find(curr) != wordset.end()) {
                            visited.insert(curr);
                            q.push(curr);
                        }
                    }
                    curr[i] = orignal;
                }
            }
            level++;
        }
        return 0;
    }
};
