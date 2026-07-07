class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();

        vector<int>ans(2*n);

        for(int i=0;i<ans.size();i++){
            int idx = i%n;

            ans[i] = nums[idx];
        }
        return ans;
    }
};