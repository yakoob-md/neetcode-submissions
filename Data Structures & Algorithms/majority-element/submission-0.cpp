class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int,int>mp;
    
        for(int i=0;i<nums.size();i++){
        
            int ele = nums[i];
        
            if(mp.find(ele) != mp.end()) mp[ele]++;
            else mp[ele] = 1;
        }

        int maxfreq = 0;
        int element = -1;
    
        for(auto it:mp){
            if(it.second > maxfreq){
                maxfreq = it.second;
                element = it.first;
            }
        }
        return element;
    
    }
};