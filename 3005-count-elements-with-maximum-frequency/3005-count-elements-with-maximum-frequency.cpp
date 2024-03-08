class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map <int, int> mp;
        int ans = 0;
        int freq = 0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            freq = max(freq, mp[nums[i]]);
        }
        for(auto x:mp){
            if(x.second == freq)
            ans+=freq;
        }
        return ans;
    }
};