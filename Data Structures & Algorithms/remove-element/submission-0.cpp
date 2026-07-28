class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = nums.size()-1;
        int n = nums.size();

        while(i<=j){
            if(nums[i] == val){
                
                // swap with ending element
                if(nums[j] != val){
                    swap(nums[i],nums[j]);
                    i++;j--;
                }
                else j--;
            }
            else i++;
        }
        return j+1;
    }
};