class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int l = 0, r = 0;
        int res = 0;
        while (r < s.size()) {
            if (map.find(s[r]) != map.end()) {
                l = max(l, map[s[r]] + 1);
            }
            map[s[r]] = r;
            r++;
            res = max(res, r - l);
        }
        return res;
    }
};
