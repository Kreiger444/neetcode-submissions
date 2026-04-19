class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> groups;
        vector<vector<string>> result;
        for(string s : strs)
        {
            string key = s;
            sort(key.begin(), key.end());
            groups[key].push_back(s);
        }
        for (const auto& pair : groups) {
            result.push_back(pair.second);
        
    }
    return result;

        

    }
};
