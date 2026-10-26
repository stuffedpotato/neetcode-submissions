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
            std::pair<std::unordered_map<char,int>::iterator, bool> result = s_map.emplace(s[i], 0);

            if (!result.second) {
                std::unordered_map<char,int>::iterator it = result.first;
                int new_val = (it->second) + 1;
                s_map.erase(it);
                s_map.emplace(s[i], new_val);
            }
        }

        for (int i = 0; i < t_length; i++) {
            std::pair<std::unordered_map<char,int>::iterator, bool> result = t_map.emplace(t[i], 0);

            if (!result.second) {
                std::unordered_map<char,int>::iterator it = result.first;
                int new_val = (it->second) + 1;
                t_map.erase(it);
                t_map.emplace(t[i], new_val);
            }
        }

        if (s_map != t_map) {
            return false;
        }

        return true;
    }
};
