class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> count(2001, 0);
        for(int i=0; i<nums.size(); i++){
            count[nums[i]+1000]++;
        }
        vector<int> results;
        for(int i=0; i<k; i++){
            int max=0;
            for(int j=0; j<2001; j++){
                if(count[max]<count[j]){
                    max=j;
                }
            }
            results.push_back(max-1000);
            count[max]=0;
        }
        return results;
    }
};
