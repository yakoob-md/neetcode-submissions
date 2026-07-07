class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        vector<int>ans;

        unordered_map<int,int>mp;

        // store elements in the map
        for(int i=0;i<n;i++){
            mp[nums[i]] = i;
        }

        for(int i=0;i<n;i++){
            int diff = target - nums[i];
            // checking the diff is present in nums
            if(mp.find(diff) != mp.end() && i!=mp[diff]){
                // element exists
                ans.push_back(i);
                ans.push_back(mp[diff]);
                return ans;
            }
        }
        return ans;
    }
};
