class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        int res = 0;
        int n = nums.size();
        int count=1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n-1; i++) {
            if(nums[i+1]==nums[i]){
                continue;
            }
            else if(nums[i+1]-nums[i]==1){
                count++;
            }
            else{
                res=max(res, count);
                count=1;
            }
        }
        return max(res, count);
    }
};
