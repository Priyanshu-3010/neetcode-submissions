class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, int> mp;

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            mp[c]++;
        }

        for (int j = 0; j < t.length(); j++) {
            char p = t[j];
            mp[p]--;

            if (mp[p] < 0) return false;
        }
        return true;
    }
};
