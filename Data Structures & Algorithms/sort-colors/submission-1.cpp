class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int hig = nums.size()-1;
        int mid = 0;

        while(mid<=hig){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++;mid++;
            }
            else if(nums[mid] == 2){
                swap(nums[mid],nums[hig]);
                hig--;
            }
            else mid++;
        }
    }
};