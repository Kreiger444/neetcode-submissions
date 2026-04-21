class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int, int> m;
        vector<int> res;

        for (int i = 0; i < k; ++i) {
            m[nums[i]]++;
        }

        for (int i = k; i < nums.size(); ++i) {
            res.push_back(m.rbegin()->first);
            m[nums[i-k]]--;
            if (m[nums[i-k]] == 0) {
                m.erase(nums[i-k]);
            } 
            m[nums[i]]++;
        }

        res.push_back(m.rbegin()->first);

        return res;
    }
};
