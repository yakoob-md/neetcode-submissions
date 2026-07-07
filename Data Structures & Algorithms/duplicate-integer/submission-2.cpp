class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int> mp;

        for(int i = 0; i < n; i++) {
            int x = nums[i];

            if(mp.find(x) != mp.end()) {
                mp[x]++;
            }
            else {
                mp[x] = 1;
            }
        }

        for(auto it : mp) {
            if(it.second > 1) {
                return true;
            }
        }

        return false;
    }
};