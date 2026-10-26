class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_length = s.length();
        int t_length = t.length();

        if (s_length != t_length) {
            return false;
        }

        std::unordered_map<char, int> s_map;
        std::unordered_map<char, int> t_map;

        for (int i = 0; i < s_length; i++) {
            // Operator [] will do one of the following:
            // 1. If key exists, return reference to the value,
            // 2. If key does not exist, insert (key, value) pair.

            s_map[s[i]]++;
            t_map[t[i]]++;
        }
        
        return s_map == t_map;
    }
};
