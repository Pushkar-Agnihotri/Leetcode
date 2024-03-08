class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map <int, int> mp;
        int ans = 0;
        int freq = 0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(freq < mp[nums[i]]){
                freq = mp[nums[i]];
                ans = freq;
            }
            else if(freq == mp[nums[i]]){
                ans+=freq;
            }
        }
        return ans;
    }
};